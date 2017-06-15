include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = starwels-qt
noinst_LIBRARIES = libstarwelsqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# starwels qt core #
QT_TS = \
  locale/starwels_ach.ts \
  locale/starwels_af_ZA.ts \
  locale/starwels_ar.ts \
  locale/starwels_be_BY.ts \
  locale/starwels_bg.ts \
  locale/starwels_bs.ts \
  locale/starwels_ca_ES.ts \
  locale/starwels_ca.ts \
  locale/starwels_ca@valencia.ts \
  locale/starwels_cmn.ts \
  locale/starwels_cs.ts \
  locale/starwels_cy.ts \
  locale/starwels_da.ts \
  locale/starwels_de.ts \
  locale/starwels_el_GR.ts \
  locale/starwels_en.ts \
  locale/starwels_eo.ts \
  locale/starwels_es_CL.ts \
  locale/starwels_es_DO.ts \
  locale/starwels_es_MX.ts \
  locale/starwels_es.ts \
  locale/starwels_es_UY.ts \
  locale/starwels_et.ts \
  locale/starwels_eu_ES.ts \
  locale/starwels_fa_IR.ts \
  locale/starwels_fa.ts \
  locale/starwels_fi.ts \
  locale/starwels_fr_CA.ts \
  locale/starwels_fr.ts \
  locale/starwels_gl.ts \
  locale/starwels_gu_IN.ts \
  locale/starwels_he.ts \
  locale/starwels_hi_IN.ts \
  locale/starwels_hr.ts \
  locale/starwels_hu.ts \
  locale/starwels_id_ID.ts \
  locale/starwels_it.ts \
  locale/starwels_ja.ts \
  locale/starwels_ka.ts \
  locale/starwels_kk_KZ.ts \
  locale/starwels_ko_KR.ts \
  locale/starwels_ky.ts \
  locale/starwels_la.ts \
  locale/starwels_lt.ts \
  locale/starwels_lv_LV.ts \
  locale/starwels_mn.ts \
  locale/starwels_ms_MY.ts \
  locale/starwels_nb.ts \
  locale/starwels_nl.ts \
  locale/starwels_pam.ts \
  locale/starwels_pl.ts \
  locale/starwels_pt_BR.ts \
  locale/starwels_pt_PT.ts \
  locale/starwels_ro_RO.ts \
  locale/starwels_ru.ts \
  locale/starwels_sah.ts \
  locale/starwels_sk.ts \
  locale/starwels_sl_SI.ts \
  locale/starwels_sq.ts \
  locale/starwels_sr.ts \
  locale/starwels_sv.ts \
  locale/starwels_th_TH.ts \
  locale/starwels_tr.ts \
  locale/starwels_uk.ts \
  locale/starwels_ur_PK.ts \
  locale/starwels_uz@Cyrl.ts \
  locale/starwels_vi.ts \
  locale/starwels_vi_VN.ts \
  locale/starwels_zh_CN.ts \
  locale/starwels_zh_HK.ts \
  locale/starwels_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_starwelsaddressvalidator.cpp \
  moc_starwelsamountfield.cpp \
  moc_starwelsgui.cpp \
  moc_starwelsunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

STARWELS_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  starwels.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_starwels.cpp
QT_QRC = starwels.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

STARWELS_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  starwelsaddressvalidator.h \
  starwelsamountfield.h \
  starwelsgui.h \
  starwelsunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/starwels.ico \
  res/icons/starwels.png \
  res/icons/starwels_testnet.ico \
  res/icons/starwels_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

STARWELS_QT_CPP = \
  starwels.cpp \
  starwelsaddressvalidator.cpp \
  starwelsamountfield.cpp \
  starwelsgui.cpp \
  starwelsunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
STARWELS_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

STARWELS_RC = res/starwels-qt-res.rc

libstarwelsqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libstarwelsqt_a_SOURCES = $(STARWELS_QT_CPP) $(STARWELS_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libstarwelsqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libstarwelsqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# starwels-qt binary #
starwels_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
starwels_qt_SOURCES = starwels.cpp
if TARGET_DARWIN
  starwels_qt_SOURCES += $(STARWELS_MM)
endif
if TARGET_WINDOWS
  starwels_qt_SOURCES += $(STARWELS_RC)
endif
starwels_qt_LDADD = libstarwelsqt.a $(LIBSTARWELS_SERVER)
if ENABLE_WALLET
starwels_qt_LDADD += $(LIBSTARWELS_WALLET)
endif
starwels_qt_LDADD += $(LIBSTARWELS_CLI) $(LIBSTARWELS_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
starwels_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

starwelsstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/starwelsstrings.cpp

translate: starwelsstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(STARWELS_QT_CPP) $(STARWELS_QT_H) $(STARWELS_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/starwels_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name starwels -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
