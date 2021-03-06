
# The purpose of this makefile is
# gui-source-code-building from qt-ui-files.  Further
# testing and cleaning functionality can be triggered.
#
# Copyright (c) 2006 Visenso GmbH

ifdef PYTHON_HOME
PYTHON=$(PYTHON_HOME)/bin/python3
else
PYTHON=python3
endif
#QTRCCOFCOVISE=$(EXTERNLIBS)/qt4/bin/rcc
QTRCCOFCOVISE=rcc
PYUICOFCOVISE=$(PYTHON) ./wqtpyuic5.py 

AUTOGENERATED_WIDGET_PYTHON_MODULES =		\
GenericVisualizerPanelBase.py                \
PatienceDialogBase.py                        \
ColorMapCustomBase.py			\
DialogChangePathBase.py                      \
DialogOverwriteFileBase.py           \
DialogFileNewBase.py                      \
DialogReduceTimeStepAskerBase.py             \
DialogDuplicateBase.py \
ExitConfirmationBase.py \
CompositionPanelBase.py \
GridCompositionPanelHelpBase.py                   \
PartCompositionPanelHelpBase.py                   \
FloatInRangeControlBase.py			\
InitialChooserDialogBase.py			\
IsoCutterPanelBase.py                             \
IsoSurfaceHelpBase.py                        \
MainWindowBase.py				\
NewViewpointConfirmationBase.py              \
PicturePanelBase.py                             \
PresenterManagerBase.py                         \
StartPreparationBase.py			        \
CasesFilterBase.py                              \
CasesFilterHelpBase.py                         \
DataSetsSelectionBase.py                       \
DataSetsSelectionHelpBase.py                   \
ProjectSetUpBase.py                            \
ProjectSetUpHelpBase.py                        \
VrmlPanelBase.py                                \
CuttingSurfaceVectorsHelpBase.py               \
CuttingSurfaceContoursHelpBase.py               \
StreamlinesHelpBase.py                       \
NoHelpBase.py                                \
AdviceBase.py                                   \
SceneGraphItemPanelBase.py                      \
SceneGraphItemPanelHelpBase.py                \
MainWindowHelpBase.py                        \
DocumentViewerBase.py                          \
DocumentViewerHelpBase.py                    \
DatasetInformationPanelBase.py                 \
DatasetInformationHelpBase.py                \
GridVisualizationPanelBase.py           \
GridVisualizationPanelHelpBase.py       \
PartVisualizationPanelBase.py           \
PartVisualizationPanelHelpBase.py       \
MultiSelectionHelpBase.py                    \
ViewpointManagerBase.py                 \
AnimationManagerBase.py                \
TrackingManagerBase.py                 \
CroppingManagerBase.py                 \
VectorFieldPanelBase.py                \
VectorFieldHelpBase.py                 \
ClipIntervalPanelBase.py               \
IsoCutterHelpBase.py                   \
ClipIntervalHelpBase.py                \
DNAItemPanelBase.py                      \
GenericObjectPanelBase.py               \
CocaseEditorBase.py                     \
ProjectInformationBase.py                \
LogitechDialogBase.py                    \
TimestepSelectorDialogBase.py            \
DialogOkayAskerBase.py                   \
SceneObjectPanelBase.py                  \
CoxmlBrowserPanelBase.py		\
DomainSurfaceHelpBase.py  		\
VideoCaptureManagerBase.py      \
GettingStartedWindowBase.py         \
ColorChooserBase.py                 \
SceneObjectListWindowBase.py


AUTOGENERATED_EXTERNAL_RESOURCE_FILES =  \
StaticImages.rcc                         \
Style_White.rcc


AUTOGENERATED_FILES = $(AUTOGENERATED_WIDGET_PYTHON_MODULES) $(AUTOGENERATED_EXTERNAL_RESOURCE_FILES)


UIFILES_LOCATION=designerfiles
RESOURCE_LOCATION=designerfiles/images




all: $(AUTOGENERATED_FILES)
	cd converters && $(MAKE) all
	$(MAKE) pyc
	@echo "The application is ready for start."

pyc:
	@echo "Creating pyc files"
	$(PYTHON) -m compileall .


%Base.py: $(UIFILES_LOCATION)/%Base.ui
	$(PYUICOFCOVISE) $< -o $@ -x

StaticImages.rcc: $(RESOURCE_LOCATION)/StaticImages.qrc
	$(QTRCCOFCOVISE) $< -binary -o $@

Style_%.rcc: $(RESOURCE_LOCATION)/Style_%/*.qrc
	$(QTRCCOFCOVISE) $< -binary -o $@




#converters: 
#	cd converters && $(MAKE)

clean:
	$(RM) $(AUTOGENERATED_FILES)
	$(RM) *.pyc
	$(RM) -r doc
	cd negotiator && $(MAKE) clean
	cd converters && $(MAKE) clean

doc:
	doxygen vr-prepare.dox

.PHONY: all unittests clean converters

# eof
