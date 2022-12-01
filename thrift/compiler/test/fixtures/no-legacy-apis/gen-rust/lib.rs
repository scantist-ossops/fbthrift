// @generated by Thrift for thrift/compiler/test/fixtures/no-legacy-apis/src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::all)]

pub use self::errors::*;
pub use self::types::*;

pub mod types;

#[doc(hidden)]
pub mod dependencies {
    pub use thrift as thrift;
}

pub mod services {
    pub mod my_service {
        #[derive(Clone, Debug)]
        pub enum QueryExn {
            #[doc(hidden)]
            Success(crate::types::MyStruct),
            ApplicationException(::fbthrift::ApplicationException),
        }

        impl ::std::convert::From<crate::errors::my_service::QueryError> for QueryExn {
            fn from(err: crate::errors::my_service::QueryError) -> Self {
                match err {
                    crate::errors::my_service::QueryError::ApplicationException(aexn) => QueryExn::ApplicationException(aexn),
                    crate::errors::my_service::QueryError::ThriftError(err) => QueryExn::ApplicationException(::fbthrift::ApplicationException {
                        message: err.to_string(),
                        type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                    }),
                }
            }
        }

        impl ::std::convert::From<::fbthrift::ApplicationException> for QueryExn {
            fn from(exn: ::fbthrift::ApplicationException) -> Self {
                Self::ApplicationException(exn)
            }
        }

        impl ::fbthrift::ExceptionInfo for QueryExn {
            fn exn_name(&self) -> &'static str {
                match self {
                    Self::Success(_) => panic!("ExceptionInfo::exn_name called on Success"),
                    Self::ApplicationException(aexn) => aexn.exn_name(),
                }
            }

            fn exn_value(&self) -> String {
                match self {
                    Self::Success(_) => panic!("ExceptionInfo::exn_value called on Success"),
                    Self::ApplicationException(aexn) => aexn.exn_value(),
                }
            }

            fn exn_is_declared(&self) -> bool {
                match self {
                    Self::Success(_) => panic!("ExceptionInfo::exn_is_declared called on Success"),
                    Self::ApplicationException(aexn) => aexn.exn_is_declared(),
                }
            }
        }

        impl ::fbthrift::ResultInfo for QueryExn {
            fn result_type(&self) -> ::fbthrift::ResultType {
                match self {
                    Self::Success(_) => ::fbthrift::ResultType::Return,
                    Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
                }
            }
        }

        impl ::fbthrift::GetTType for QueryExn {
            const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
        }

        impl<P> ::fbthrift::Serialize<P> for QueryExn
        where
            P: ::fbthrift::ProtocolWriter,
        {
            fn write(&self, p: &mut P) {
                if let Self::ApplicationException(aexn) = self {
                    return aexn.write(p);
                }
                p.write_struct_begin("Query");
                match self {
                    Self::Success(inner) => {
                        p.write_field_begin(
                            "Success",
                            ::fbthrift::TType::Struct,
                            0i16,
                        );
                        inner.write(p);
                        p.write_field_end();
                    }
                    Self::ApplicationException(_aexn) => unreachable!(),
                }
                p.write_field_stop();
                p.write_struct_end();
            }
        }

        impl<P> ::fbthrift::Deserialize<P> for QueryExn
        where
            P: ::fbthrift::ProtocolReader,
        {
            fn read(p: &mut P) -> ::anyhow::Result<Self> {
                static RETURNS: &[::fbthrift::Field] = &[
                    ::fbthrift::Field::new("Success", ::fbthrift::TType::Struct, 0),
                ];
                let _ = p.read_struct_begin(|_| ())?;
                let mut once = false;
                let mut alt = ::std::option::Option::None;
                loop {
                    let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                    match ((fty, fid as ::std::primitive::i32), once) {
                        ((::fbthrift::TType::Stop, _), _) => {
                            p.read_field_end()?;
                            break;
                        }
                        ((::fbthrift::TType::Struct, 0i32), false) => {
                            once = true;
                            alt = ::std::option::Option::Some(Self::Success(::fbthrift::Deserialize::read(p)?));
                        }
                        ((ty, _id), false) => p.skip(ty)?,
                        ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                            ::fbthrift::ApplicationException::new(
                                ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                                format!(
                                    "unwanted extra union {} field ty {:?} id {}",
                                    "QueryExn",
                                    badty,
                                    badid,
                                ),
                            )
                        )),
                    }
                    p.read_field_end()?;
                }
                p.read_struct_end()?;
                alt.ok_or_else(||
                    ::fbthrift::ApplicationException::new(
                        ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                        format!("Empty union {}", "QueryExn"),
                    )
                    .into(),
                )
            }
        }
    }
}

/// Client implementation for each service in `module`.
pub mod client {

    pub struct MyServiceImpl<P, T, S = ::fbthrift::NoopSpawner> {
        transport: T,
        _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
    }

    impl<P, T, S> MyServiceImpl<P, T, S>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        pub fn new(
            transport: T,
        ) -> Self {
            Self {
                transport,
                _phantom: ::std::marker::PhantomData,
            }
        }

        pub fn transport(&self) -> &T {
            &self.transport
        }


        fn _query_impl(
            &self,
            arg_u: &crate::types::MyUnion,
            rpc_options: T::RpcOptions,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>> {
            use ::const_cstr::const_cstr;
            use ::tracing::Instrument as _;
            use ::futures::FutureExt as _;

            const_cstr! {
                SERVICE_NAME = "MyService";
                METHOD_NAME = "MyService.query";
            }
            let args = self::Args_MyService_query {
                u: arg_u,
                _phantom: ::std::marker::PhantomData,
            };

            let transport = self.transport();

            // need to do call setup outside of async block because T: Transport isn't Send
            let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("query", &args) {
                ::std::result::Result::Ok(res) => res,
                ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
            };

            let call = transport
                .call(SERVICE_NAME.as_cstr(), METHOD_NAME.as_cstr(), request_env, rpc_options)
                .instrument(::tracing::trace_span!("call", function = "MyService.query"));

            async move {
                let reply_env = call.await?;

                let de = P::deserializer(reply_env);
                let (res, _de): (::std::result::Result<crate::services::my_service::QueryExn, _>, _) =
                    ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

                let res = match res {
                    ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                    ::std::result::Result::Err(aexn) =>
                        ::std::result::Result::Err(crate::errors::my_service::QueryError::ApplicationException(aexn))
                };
                res
            }
            .instrument(::tracing::info_span!("MyService.query"))
            .boxed()
        }
    }

    pub trait MyService: ::std::marker::Send {
        fn query(
            &self,
            arg_u: &crate::types::MyUnion,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>>;
    }

    pub trait MyServiceExt<T>: MyService
    where
        T: ::fbthrift::Transport,
    {
        fn query_with_rpc_opts(
            &self,
            arg_u: &crate::types::MyUnion,
            rpc_options: T::RpcOptions,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>>;
    }

    struct Args_MyService_query<'a> {
        u: &'a crate::types::MyUnion,
        _phantom: ::std::marker::PhantomData<&'a ()>,
    }

    impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_MyService_query<'a> {
        #[inline]
        #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "MyService.query"))]
        fn write(&self, p: &mut P) {
            p.write_struct_begin("args");
            p.write_field_begin("u", ::fbthrift::TType::Struct, 1i16);
            ::fbthrift::Serialize::write(&self.u, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P, T, S> MyService for MyServiceImpl<P, T, S>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        fn query(
            &self,
            arg_u: &crate::types::MyUnion,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>> {
            let rpc_options = T::RpcOptions::default();
            self._query_impl(
                arg_u,
                rpc_options,
            )
        }
    }

    impl<P, T, S> MyServiceExt<T> for MyServiceImpl<P, T, S>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        fn query_with_rpc_opts(
            &self,
            arg_u: &crate::types::MyUnion,
            rpc_options: T::RpcOptions,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>> {
            self._query_impl(
                arg_u,
                rpc_options,
            )
        }
    }

    impl<'a, S> MyService for S
    where
        S: ::std::convert::AsRef<dyn MyService + 'a>,
        S: ::std::marker::Send,
    {
        fn query(
            &self,
            arg_u: &crate::types::MyUnion,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>> {
            self.as_ref().query(
                arg_u,
            )
        }
    }

    impl<'a, S, T> MyServiceExt<T> for S
    where
        S: ::std::convert::AsRef<dyn MyService + 'a>,
        S: ::std::convert::AsRef<dyn MyServiceExt<T> + 'a>,
        S: ::std::marker::Send,
        T: ::fbthrift::Transport,
    {
        fn query_with_rpc_opts(
            &self,
            arg_u: &crate::types::MyUnion,
            rpc_options: T::RpcOptions,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>> {
            <Self as ::std::convert::AsRef<dyn MyServiceExt<T>>>::as_ref(self).query_with_rpc_opts(
                arg_u,
                rpc_options,
            )
        }
    }

    #[derive(Clone)]
    pub struct make_MyService;

    /// To be called by user directly setting up a client. Avoids
    /// needing ClientFactory trait in scope, avoids unidiomatic
    /// make_Trait name.
    ///
    /// ```
    /// # const _: &str = stringify! {
    /// use bgs::client::BuckGraphService;
    ///
    /// let protocol = BinaryProtocol::new();
    /// let transport = HttpClient::new();
    /// let client = <dyn BuckGraphService>::new(protocol, transport);
    /// # };
    /// ```
    impl dyn MyService {
        pub fn new<P, T>(
            protocol: P,
            transport: T,
        ) -> ::std::sync::Arc<impl MyService + ::std::marker::Send + ::std::marker::Sync + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport,
            P::Deserializer: ::std::marker::Send,
        {
            let spawner = ::fbthrift::help::NoopSpawner;
            Self::with_spawner(protocol, transport, spawner)
        }

        pub fn with_spawner<P, T, S>(
            protocol: P,
            transport: T,
            spawner: S,
        ) -> ::std::sync::Arc<impl MyService + ::std::marker::Send + ::std::marker::Sync + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport,
            P::Deserializer: ::std::marker::Send,
            S: ::fbthrift::help::Spawner,
        {
            let _ = protocol;
            let _ = spawner;
            ::std::sync::Arc::new(MyServiceImpl::<P, T, S>::new(transport))
        }
    }

    impl<T> dyn MyServiceExt<T>
    where
        T: ::fbthrift::Transport,
    {
        pub fn new<P>(
            protocol: P,
            transport: T,
        ) -> ::std::sync::Arc<impl MyServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            P::Deserializer: ::std::marker::Send,
        {
            let spawner = ::fbthrift::help::NoopSpawner;
            Self::with_spawner(protocol, transport, spawner)
        }

        pub fn with_spawner<P, S>(
            protocol: P,
            transport: T,
            spawner: S,
        ) -> ::std::sync::Arc<impl MyServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            P::Deserializer: ::std::marker::Send,
            S: ::fbthrift::help::Spawner,
        {
            let _ = protocol;
            let _ = spawner;
            ::std::sync::Arc::new(MyServiceImpl::<P, T, S>::new(transport))
        }
    }

    pub type MyServiceDynClient = <make_MyService as ::fbthrift::ClientFactory>::Api;
    pub type MyServiceClient = ::std::sync::Arc<MyServiceDynClient>;

    /// The same thing, but to be called from generic contexts where we are
    /// working with a type parameter `C: ClientFactory` to produce clients.
    impl ::fbthrift::ClientFactory for make_MyService {
        type Api = dyn MyService + ::std::marker::Send + ::std::marker::Sync + 'static;

        fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport,
            P::Deserializer: ::std::marker::Send,
            S: ::fbthrift::help::Spawner,
        {
            <dyn MyService>::with_spawner(protocol, transport, spawner)
        }
    }

}

/// Server definitions for `module`.
pub mod server {
    #[::async_trait::async_trait]
    pub trait MyService: ::std::marker::Send + ::std::marker::Sync + 'static {
        async fn query(
            &self,
            _u: crate::types::MyUnion,
        ) -> ::std::result::Result<crate::types::MyStruct, crate::services::my_service::QueryExn> {
            ::std::result::Result::Err(crate::services::my_service::QueryExn::ApplicationException(
                ::fbthrift::ApplicationException::unimplemented_method(
                    "MyService",
                    "query",
                ),
            ))
        }
    }

    #[::async_trait::async_trait]
    impl<T> MyService for ::std::boxed::Box<T>
    where
        T: MyService + Send + Sync + ?Sized,
    {
        async fn query(
            &self,
            u: crate::types::MyUnion,
        ) -> ::std::result::Result<crate::types::MyStruct, crate::services::my_service::QueryExn> {
            (**self).query(
                u,
            ).await
        }
    }

    /// Processor for MyService's methods.
    #[derive(Clone, Debug)]
    pub struct MyServiceProcessor<P, H, R, RS> {
        service: H,
        supa: ::fbthrift::NullServiceProcessor<P, R, RS>,
        _phantom: ::std::marker::PhantomData<(P, H, R, RS)>,
    }

    struct Args_MyService_query {
        u: crate::types::MyUnion,
    }
    impl<P: ::fbthrift::ProtocolReader> ::fbthrift::Deserialize<P> for self::Args_MyService_query {
        #[inline]
        #[::tracing::instrument(skip_all, level = "trace", name = "deserialize_args", fields(method = "MyService.query"))]
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static ARGS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("u", ::fbthrift::TType::Struct, 1),
            ];
            let mut field_u = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), ARGS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Struct, 1) => field_u = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                u: field_u.ok_or_else(|| ::anyhow::anyhow!("`{}` missing arg `{}`", "MyService.query", "u"))?,
            })
        }
    }


    impl<P, H, R, RS> MyServiceProcessor<P, H, R, RS>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Frame: ::std::marker::Send + 'static,
        P::Deserializer: ::std::marker::Send,
        H: MyService,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        RS: ::fbthrift::ReplyState<P::Frame, RequestContext = R> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = ::fbthrift::ProtocolDecoded<P>>
            + ::std::marker::Send + ::std::marker::Sync,
    {
        pub fn new(service: H) -> Self {
            Self {
                service,
                supa: ::fbthrift::NullServiceProcessor::new(),
                _phantom: ::std::marker::PhantomData,
            }
        }

        pub fn into_inner(self) -> H {
            self.service
        }

        #[::tracing::instrument(skip_all, name = "handler", fields(method = "MyService.query"))]
        async fn handle_query<'a>(
            &'a self,
            p: &'a mut P::Deserializer,
            req_ctxt: &R,
            reply_state: ::std::sync::Arc<::std::sync::Mutex<RS>>,
            _seqid: ::std::primitive::u32,
        ) -> ::anyhow::Result<()> {
            use ::const_cstr::const_cstr;
            use ::futures::FutureExt as _;

            const_cstr! {
                SERVICE_NAME = "MyService";
                METHOD_NAME = "MyService.query";
            }
            let mut ctx_stack = req_ctxt.get_context_stack(
                SERVICE_NAME.as_cstr(),
                METHOD_NAME.as_cstr(),
            )?;
            ::fbthrift::ContextStack::pre_read(&mut ctx_stack)?;
            let _args: self::Args_MyService_query = ::fbthrift::Deserialize::read(p)?;
            ::fbthrift::ContextStack::on_read_data(&mut ctx_stack, &::fbthrift::SerializedMessage {
                protocol: P::PROTOCOL_ID,
                method_name: METHOD_NAME.as_cstr(),
                buffer: ::std::marker::PhantomData, // FIXME P::into_buffer(p).reset(),
            })?;
            ::fbthrift::ContextStack::post_read(&mut ctx_stack, 0)?;

            let res = ::std::panic::AssertUnwindSafe(
                self.service.query(
                    _args.u,
                )
            )
            .catch_unwind()
            .await;

            // nested results - panic catch on the outside, method on the inside
            let res = match res {
                ::std::result::Result::Ok(::std::result::Result::Ok(res)) => {
                    ::tracing::info!("success");
                    crate::services::my_service::QueryExn::Success(res)
                }
                ::std::result::Result::Ok(::std::result::Result::Err(crate::services::my_service::QueryExn::Success(_))) => {
                    panic!(
                        "{} attempted to return success via error",
                        "query",
                    )
                }
                ::std::result::Result::Ok(::std::result::Result::Err(exn)) => {
                    ::tracing::error!(exception = ?exn);
                    exn
                }
                ::std::result::Result::Err(exn) => {
                    let aexn = ::fbthrift::ApplicationException::handler_panic("MyService.query", exn);
                    crate::services::my_service::QueryExn::ApplicationException(aexn)
                }
            };

            let env = ::fbthrift::help::serialize_result_envelope::<P, R, _>(
                "query",
                METHOD_NAME.as_cstr(),
                _seqid,
                req_ctxt,
                &mut ctx_stack,
                res
            )?;
            reply_state.lock().unwrap().send_reply(env);
            Ok(())
        }
    }

    #[::async_trait::async_trait]
    impl<P, H, R, RS> ::fbthrift::ServiceProcessor<P> for MyServiceProcessor<P, H, R, RS>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        H: MyService,
        P::Frame: ::std::marker::Send + 'static,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = ::fbthrift::ProtocolDecoded<P>>
            + ::std::marker::Send + ::std::marker::Sync + 'static,
        RS: ::fbthrift::ReplyState<P::Frame, RequestContext = R> + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        type RequestContext = R;
        type ReplyState = RS;

        #[inline]
        fn method_idx(&self, name: &[::std::primitive::u8]) -> ::std::result::Result<::std::primitive::usize, ::fbthrift::ApplicationException> {
            match name {
                b"query" => ::std::result::Result::Ok(0usize),
                _ => ::std::result::Result::Err(::fbthrift::ApplicationException::unknown_method()),
            }
        }

        #[allow(clippy::match_single_binding)]
        async fn handle_method(
            &self,
            idx: ::std::primitive::usize,
            _p: &mut P::Deserializer,
            _r: &R,
            _reply_state: ::std::sync::Arc<::std::sync::Mutex<RS>>,
            _seqid: ::std::primitive::u32,
        ) -> ::anyhow::Result<()> {
            match idx {
                0usize => {
                    self.handle_query(_p, _r, _reply_state, _seqid).await
                }
                bad => panic!(
                    "{}: unexpected method idx {}",
                    "MyServiceProcessor",
                    bad
                ),
            }
        }

        #[allow(clippy::match_single_binding)]
        #[inline]
        fn create_interaction_idx(&self, name: &str) -> ::anyhow::Result<::std::primitive::usize> {
            match name {
                _ => ::anyhow::bail!("Unknown interaction"),
            }
        }

        #[allow(clippy::match_single_binding)]
        fn handle_create_interaction(
            &self,
            idx: ::std::primitive::usize,
        ) -> ::anyhow::Result<
            ::std::sync::Arc<dyn ::fbthrift::ThriftService<P::Frame, Handler = (), RequestContext = Self::RequestContext, ReplyState = Self::ReplyState> + ::std::marker::Send + 'static>
        > {
            match idx {
                bad => panic!(
                    "{}: unexpected method idx {}",
                    "MyServiceProcessor",
                    bad
                ),
            }
        }
    }

    #[::async_trait::async_trait]
    impl<P, H, R, RS> ::fbthrift::ThriftService<P::Frame> for MyServiceProcessor<P, H, R, RS>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        P::Frame: ::std::marker::Send + 'static,
        H: MyService,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = ::fbthrift::ProtocolDecoded<P>>
            + ::std::marker::Send + ::std::marker::Sync + 'static,
        RS: ::fbthrift::ReplyState<P::Frame, RequestContext = R> + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        type Handler = H;
        type RequestContext = R;
        type ReplyState = RS;

        #[tracing::instrument(level="trace", skip_all, fields(service = "MyService"))]
        async fn call(
            &self,
            req: ::fbthrift::ProtocolDecoded<P>,
            req_ctxt: &R,
            reply_state: ::std::sync::Arc<::std::sync::Mutex<RS>>,
        ) -> ::anyhow::Result<()> {
            use ::fbthrift::{BufExt as _, ProtocolReader as _, ServiceProcessor as _};
            let mut p = P::deserializer(req);
            let (idx, mty, seqid) = p.read_message_begin(|name| self.method_idx(name))?;
            if mty != ::fbthrift::MessageType::Call {
                return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::InvalidMessageType,
                    format!("message type {:?} not handled", mty)
                )));
            }
            let idx = match idx {
                ::std::result::Result::Ok(idx) => idx,
                ::std::result::Result::Err(_) => {
                    let cur = P::into_buffer(p).reset();
                    return self.supa.call(cur, req_ctxt, reply_state).await;
                }
            };
            self.handle_method(idx, &mut p, req_ctxt, reply_state, seqid).await?;
            p.read_message_end()?;

            Ok(())
        }

        fn create_interaction(
            &self,
            name: &str,
        ) -> ::anyhow::Result<
            ::std::sync::Arc<dyn ::fbthrift::ThriftService<P::Frame, Handler = (), RequestContext = R, ReplyState = RS> + ::std::marker::Send + 'static>
        > {
            use ::fbthrift::{ServiceProcessor as _};
            let idx = self.create_interaction_idx(name);
            let idx = match idx {
                ::anyhow::Result::Ok(idx) => idx,
                ::anyhow::Result::Err(_) => {
                    return self.supa.create_interaction(name);
                }
            };
            self.handle_create_interaction(idx)
        }
    }

    /// Construct a new instance of a MyService service.
    ///
    /// This is called when a new instance of a Thrift service Processor
    /// is needed for a particular Thrift protocol.
    #[::tracing::instrument(level="debug", skip_all, fields(proto = ?proto))]
    pub fn make_MyService_server<F, H, R, RS>(
        proto: ::fbthrift::ProtocolID,
        handler: H,
    ) -> ::std::result::Result<::std::boxed::Box<dyn ::fbthrift::ThriftService<F, Handler = H, RequestContext = R, ReplyState = RS> + ::std::marker::Send + 'static>, ::fbthrift::ApplicationException>
    where
        F: ::fbthrift::Framing + ::std::marker::Send + ::std::marker::Sync + 'static,
        H: MyService,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = F::DecBuf> + ::std::marker::Send + ::std::marker::Sync + 'static,
        RS: ::fbthrift::ReplyState<F, RequestContext = R> + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        match proto {
            ::fbthrift::ProtocolID::BinaryProtocol => {
                ::std::result::Result::Ok(::std::boxed::Box::new(MyServiceProcessor::<::fbthrift::BinaryProtocol<F>, H, R, RS>::new(handler)))
            }
            ::fbthrift::ProtocolID::CompactProtocol => {
                ::std::result::Result::Ok(::std::boxed::Box::new(MyServiceProcessor::<::fbthrift::CompactProtocol<F>, H, R, RS>::new(handler)))
            }
            bad => {
                ::tracing::error!(method = "MyService.", invalid_protocol = ?bad);
                ::std::result::Result::Err(::fbthrift::ApplicationException::invalid_protocol(bad))
            }
        }
    }
}

/// Client mocks. For every service, a struct mock::TheService that implements
/// client::TheService.
///
/// As an example of the generated API, for the following thrift service:
///
/// ```thrift
/// service MyService {
///     FunctionResponse myFunction(
///         1: FunctionRequest request,
///     ) throws {
///         1: StorageException s,
///         2: NotFoundException n,
///     ),
///
///     // other functions
/// }
/// ```
///
/// we would end up with this mock object under crate::mock::MyService:
///
/// ```
/// # const _: &str = stringify! {
/// impl crate::client::MyService for MyService<'mock> {...}
///
/// pub struct MyService<'mock> {
///     pub myFunction: myFunction<'mock>,
///     // ...
/// }
///
/// impl dyn crate::client::MyService {
///     pub fn mock<'mock>() -> MyService<'mock>;
/// }
///
/// impl myFunction<'mock> {
///     // directly return the given success response
///     pub fn ret(&self, value: FunctionResponse);
///
///     // invoke closure to compute success response
///     pub fn mock(
///         &self,
///         mock: impl FnMut(FunctionRequest) -> FunctionResponse + Send + Sync + 'mock,
///     );
///
///     // invoke closure to compute response
///     pub fn mock_result(
///         &self,
///         mock: impl FnMut(FunctionRequest) -> Result<FunctionResponse, crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock,
///     );
///
///     // return one of the function's declared exceptions
///     pub fn throw<E>(&self, exception: E)
///     where
///         E: Clone + Into<crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock;
/// }
///
/// impl From<StorageException> for MyFunctionExn {...}
/// impl From<NotFoundException> for MyFunctionExn {...}
/// # };
/// ```
///
/// The intended usage from a test would be:
///
/// ```
/// # const _: &str = stringify! {
/// use std::sync::Arc;
/// use thrift_if::client::MyService;
///
/// #[test]
/// fn test_my_client() {
///     let mock = Arc::new(<dyn MyService>::mock());
///
///     // directly return a success response
///     let resp = FunctionResponse {...};
///     mock.myFunction.ret(resp);
///
///     // or give a closure to compute the success response
///     mock.myFunction.mock(|request| FunctionResponse {...});
///
///     // or throw one of the function's exceptions
///     mock.myFunction.throw(StorageException::ItFailed);
///
///     // or compute a Result (useful if your exceptions aren't Clone)
///     mock.myFunction.mock_result(|request| Err(...));
///
///     let out = do_the_thing(mock).wait().unwrap();
///     assert!(out.what_i_expected());
/// }
///
/// fn do_the_thing(
///     client: Arc<dyn MyService + Send + Sync + 'static>,
/// ) -> impl Future<Item = Out> {...}
/// # };
/// ```
pub mod mock {
    pub struct MyService<'mock> {
        pub query: r#impl::my_service::query<'mock>,
        _marker: ::std::marker::PhantomData<&'mock ()>,
    }

    impl dyn super::client::MyService {
        pub fn mock<'mock>() -> MyService<'mock> {
            MyService {
                query: r#impl::my_service::query::unimplemented(),
                _marker: ::std::marker::PhantomData,
            }
        }
    }

    impl<'mock> super::client::MyService for MyService<'mock> {
        fn query(
            &self,
            arg_u: &crate::types::MyUnion,
        ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError>> {
            let mut closure = self.query.closure.lock().unwrap();
            let closure: &mut dyn ::std::ops::FnMut(crate::types::MyUnion) -> _ = &mut **closure;
            ::std::boxed::Box::pin(::futures::future::ready(closure(arg_u.clone())))
        }
    }

    mod r#impl {
        pub mod my_service {

            pub struct query<'mock> {
                pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                    dyn ::std::ops::FnMut(crate::types::MyUnion) -> ::std::result::Result<
                        crate::types::MyStruct,
                        crate::errors::my_service::QueryError,
                    > + ::std::marker::Send + ::std::marker::Sync + 'mock,
                >>,
            }

            #[allow(clippy::redundant_closure)]
            impl<'mock> query<'mock> {
                pub fn unimplemented() -> Self {
                    Self {
                        closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: crate::types::MyUnion| panic!(
                            "{}::{} is not mocked",
                            "MyService",
                            "query",
                        ))),
                    }
                }

                pub fn ret(&self, value: crate::types::MyStruct) {
                    self.mock(move |_: crate::types::MyUnion| value.clone());
                }

                pub fn mock(&self, mut mock: impl ::std::ops::FnMut(crate::types::MyUnion) -> crate::types::MyStruct + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |u| ::std::result::Result::Ok(mock(u)));
                }

                pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(crate::types::MyUnion) -> ::std::result::Result<crate::types::MyStruct, crate::errors::my_service::QueryError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |u| mock(u));
                }

                pub fn throw<E>(&self, exception: E)
                where
                    E: ::std::convert::Into<crate::errors::my_service::QueryError>,
                    E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
                {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |_: crate::types::MyUnion| ::std::result::Result::Err(exception.clone().into()));
                }
            }
        }
    }
}

/// Error return types.
pub mod errors {
    /// Errors for MyService functions.
    pub mod my_service {

        pub type QueryError = ::fbthrift::NonthrowingFunctionError;

        impl ::std::convert::From<crate::services::my_service::QueryExn> for
            ::std::result::Result<crate::types::MyStruct, QueryError>
        {
            fn from(e: crate::services::my_service::QueryExn) -> Self {
                match e {
                    crate::services::my_service::QueryExn::Success(res) => {
                        ::std::result::Result::Ok(res)
                    }
                    crate::services::my_service::QueryExn::ApplicationException(aexn) =>
                        ::std::result::Result::Err(QueryError::ApplicationException(aexn)),
                }
            }
        }

    }

}
