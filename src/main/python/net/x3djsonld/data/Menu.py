####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python Menu.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='Menu.x3d',name='title'),
    meta(content='X3D scene with a Switch of Inlines controlled by a menu',name='description')]),
  Scene=Scene(
    children=[
    Comment(' Viewpoint and any other scene setup '),
    Viewpoint(position=(0,20,110)),
    Comment(' Menu prototype declaration '),
    ProtoDeclare(name='Menu',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='menuItems',type='MFString',accessType='initializeOnly')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='TextMenuTransform',translation=(48,27,0),
            children=[
            TouchSensor(DEF='MenuTouchSensor'),
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1))),
              geometry=Text(DEF='MenuText',
                IS=IS(
                  connect=[
                  connect(nodeField='string',protoField='menuItems')]),
                fontStyle=FontStyle(size=2.4,spacing=1.2,justify=["MIDDLE","MIDDLE"]))),
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))),
              geometry=IndexedFaceSet(DEF='Backing',coordIndex=[0,1,2,3,-1],
                coord=Coordinate(point=[(25,36,-0.01),(-25,36,-0.01),(-25,-51,-0.01),(25,-51,-0.01)])))]),
          Switch(DEF='SceneSwitcher',whichChoice=0,
            children=[
            Inline(DEF='OPTION1',url=["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]),
            Inline(DEF='OPTION2',url=["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]),
            Inline(DEF='OPTION3',url=["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]),
            Inline(DEF='OPTION4',url=["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]),
            Inline(DEF='OPTION5',url=["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]),
            Inline(DEF='OPTION6',url=["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]),
            Inline(DEF='OPTION7',url=["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]),
            Inline(DEF='OPTION8',url=["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]),
            Inline(DEF='OPTION9',url=["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]),
            Inline(DEF='OPTION10',url=["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]),
            Inline(DEF='OPTION11',url=["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]),
            Inline(DEF='OPTION12',url=["../resources/JinDimpler.x3d","JinDimpler.x3d"]),
            Inline(DEF='OPTION13',url=["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]),
            Inline(DEF='OPTION14',url=["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]),
            Inline(DEF='OPTION15',url=["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]),
            Inline(DEF='OPTION16',url=["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]),
            Inline(DEF='OPTION17',url=["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]),
            Inline(DEF='OPTION18',url=["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]),
            Inline(DEF='OPTION19',url=["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]),
            Inline(DEF='OPTION20',url=["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]),
            Inline(DEF='OPTION21',url=["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]),
            Inline(DEF='OPTION22',url=["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]),
            Inline(DEF='OPTION23',url=["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]),
            Inline(DEF='OPTION24',url=["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]),
            Inline(DEF='OPTION25',url=["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]),
            Inline(DEF='OPTION26',url=["../resources/JinSlit.x3d","JinSlit.x3d"]),
            Inline(DEF='OPTION27',url=["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]),
            Inline(DEF='OPTION28',url=["../resources/JinSquint.x3d","JinSquint.x3d"]),
            Inline(DEF='OPTION29',url=["../resources/JinBlink.x3d","JinBlink.x3d"]),
            Inline(DEF='OPTION30',url=["../resources/JinWink.x3d","JinWink.x3d"])]),
          Comment(' Script to handle selection logic '),
          Script(DEF='MenuScript',
            field=[
            field(name='menuItems',type='MFString',accessType='initializeOnly'),
            field(name='selection',type='SFInt32',accessType='outputOnly'),
            field(name='touchPoint',type='SFVec3f',accessType='inputOnly'),
            field(name='spacing',type='SFFloat',accessType='initializeOnly',value=1.2),
            field(name='size',type='SFFloat',accessType='initializeOnly',value=2.4),
            field(name='menuCenterY',type='SFFloat',accessType='initializeOnly'),
            field(name='itemHeight',type='SFFloat',accessType='initializeOnly')],
            IS=IS(
              connect=[
              connect(nodeField='menuItems',protoField='menuItems')]),

          sourceCode="""
ecmascript:
        function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        function touchPoint(value) {
          Browser.print("Hit "+value+" "+selection+"\n");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print("Selected "+value+" "+selection+" "+menuItems[selection]+"\n");
          }
        }
"""),
          Comment(' ROUTEs to connect everything '),
          ROUTE(fromNode='MenuTouchSensor',fromField='hitPoint_changed',toNode='MenuScript',toField='touchPoint'),
          ROUTE(fromNode='MenuScript',fromField='selection',toNode='SceneSwitcher',toField='whichChoice')])])),
    ProtoInstance(DEF='MainMenu',name='Menu',
      fieldValue=[
      fieldValue(name='menuItems',value=["JinInnerBrowRaiser.x3d","JinOuterBrowRaiser.x3d","JinBrowLowerer.x3d","JinUpperLidRaiser.x3d","JinCheekRaiser.x3d","JinLidTightener.x3d","JinNoseWrinkler.x3d","JinUpperLipRaiser.x3d","JinNasolabialDeepener.x3d","JinLipCornerPuller.x3d","JinCheekPuffer.x3d","JinDimpler.x3d","JinLipCornerDepressor.x3d","JinLowerLipDepressor.x3d","JinChinRaiser.x3d","JinLipPuckerer.x3d","JinLipStretcher.x3d","JinLipFunneler.x3d","JinLipTightener.x3d","JinLipPressor.x3d","JinLipsPart.x3d","JinJawDrop.x3d","JinMouthStretch.x3d","JinLipSuck.x3d","JinLidDroop.x3d","JinSlit.x3d","JinEyesClosed.x3d","JinSquint.x3d","JinBlink.x3d","JinWink.x3d" ])])])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for Menu.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python Menu.py load and self-test diagnostics complete.")
