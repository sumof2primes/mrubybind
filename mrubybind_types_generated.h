// This file is generated from gen_template.rb
#define ARG(mrb, i)  Type<P##i>::get(mrb, args[i])
#define CHECK(i)  {if(!Type<P##i>::check(args[i])) return RAISE(i);}
#define RAISE(i)  raise(mrb, i, Type<P##i>::TYPE_NAME, args[i])


// callback (P0)
template<class P0>
struct Type<std::function<void(P0)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0){
          mrb_value a[] = {Type<P0>::ret(mrb, a0)};
          mrb_yield_argv(mrb, v, 1, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1)
template<class P0, class P1>
struct Type<std::function<void(P0, P1)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1)};
          mrb_yield_argv(mrb, v, 2, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2)
template<class P0, class P1, class P2>
struct Type<std::function<void(P0, P1, P2)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2)};
          mrb_yield_argv(mrb, v, 3, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3)
template<class P0, class P1, class P2, class P3>
struct Type<std::function<void(P0, P1, P2, P3)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3)};
          mrb_yield_argv(mrb, v, 4, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3, P4)
template<class P0, class P1, class P2, class P3, class P4>
struct Type<std::function<void(P0, P1, P2, P3, P4)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3, P4)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3, P4 a4){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3), Type<P4>::ret(mrb, a4)};
          mrb_yield_argv(mrb, v, 5, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3, P4)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3, P4, P5)
template<class P0, class P1, class P2, class P3, class P4, class P5>
struct Type<std::function<void(P0, P1, P2, P3, P4, P5)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3, P4, P5)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3, P4 a4, P5 a5){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3), Type<P4>::ret(mrb, a4), Type<P5>::ret(mrb, a5)};
          mrb_yield_argv(mrb, v, 6, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3, P4, P5)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3, P4, P5, P6)
template<class P0, class P1, class P2, class P3, class P4, class P5, class P6>
struct Type<std::function<void(P0, P1, P2, P3, P4, P5, P6)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3, P4, P5, P6)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3, P4 a4, P5 a5, P6 a6){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3), Type<P4>::ret(mrb, a4), Type<P5>::ret(mrb, a5), Type<P6>::ret(mrb, a6)};
          mrb_yield_argv(mrb, v, 7, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3, P4, P5, P6)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3, P4, P5, P6, P7)
template<class P0, class P1, class P2, class P3, class P4, class P5, class P6, class P7>
struct Type<std::function<void(P0, P1, P2, P3, P4, P5, P6, P7)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3, P4, P5, P6, P7)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3, P4 a4, P5 a5, P6 a6, P7 a7){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3), Type<P4>::ret(mrb, a4), Type<P5>::ret(mrb, a5), Type<P6>::ret(mrb, a6), Type<P7>::ret(mrb, a7)};
          mrb_yield_argv(mrb, v, 8, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3, P4, P5, P6, P7)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3, P4, P5, P6, P7, P8)
template<class P0, class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
struct Type<std::function<void(P0, P1, P2, P3, P4, P5, P6, P7, P8)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3, P4, P5, P6, P7, P8)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3, P4 a4, P5 a5, P6 a6, P7 a7, P8 a8){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3), Type<P4>::ret(mrb, a4), Type<P5>::ret(mrb, a5), Type<P6>::ret(mrb, a6), Type<P7>::ret(mrb, a7), Type<P8>::ret(mrb, a8)};
          mrb_yield_argv(mrb, v, 9, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3, P4, P5, P6, P7, P8)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};


// callback (P0, P1, P2, P3, P4, P5, P6, P7, P8, P9)
template<class P0, class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
struct Type<std::function<void(P0, P1, P2, P3, P4, P5, P6, P7, P8, P9)> > : public TypeFuncBase {
  static int check(mrb_value v) { return mrb_type(v) == MRB_TT_PROC; }
  static std::function<void(P0, P1, P2, P3, P4, P5, P6, P7, P8, P9)> get(mrb_state* mrb, mrb_value v) {
      return [=](P0 a0, P1 a1, P2 a2, P3 a3, P4 a4, P5 a5, P6 a6, P7 a7, P8 a8, P9 a9){
          mrb_value a[] = {Type<P0>::ret(mrb, a0), Type<P1>::ret(mrb, a1), Type<P2>::ret(mrb, a2), Type<P3>::ret(mrb, a3), Type<P4>::ret(mrb, a4), Type<P5>::ret(mrb, a5), Type<P6>::ret(mrb, a6), Type<P7>::ret(mrb, a7), Type<P8>::ret(mrb, a8), Type<P9>::ret(mrb, a9)};
          mrb_yield_argv(mrb, v, 10, a);
      };
  }
  static mrb_value ret(mrb_state* mrb, std::function<void(P0, P1, P2, P3, P4, P5, P6, P7, P8, P9)> p) {
      // don't call.
      (void)mrb; (void)p; return mrb_nil_value();
  }
};

#undef ARG
#undef CHECK