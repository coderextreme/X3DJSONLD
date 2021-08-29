###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MaterialModulatorExamples.x3d',name='title'),
    meta(content='Demonstrate multiple instances of an external prototype.',name='description'),
    meta(content='Learning suggestion for authors: try changing the modulation script so that it goes from [0 ... 1] and then [1 ... 0] alternating, rather than abruptly shifting from 1 immediately back to 0.',name='hint'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='7 September 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D prototype instances DEF USE',name='subject'),
    meta(content='MaterialModulator.png',name='Image'),
    meta(content='MaterialModulatorExamples.png',name='Image'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MaterialModulatorExamples.x3d'),
    ExternProtoDeclare(appinfo='mimic a Material node and modulate the diffuseColor field as an animation effect',documentation='http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html',name='MaterialModulator',url=["MaterialModulator.x3d#MaterialModulator","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulator.x3d#MaterialModulator"],
      field=[
      field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='default value 0.8 0.8 0.8',name='diffuseColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default value 0 0 0',name='emissiveColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default value 0 0 0',name='specularColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default value 0.0',name='transparency',type='SFFloat'),
      field(accessType='inputOutput',appinfo='default value 0.2',name='shininess',type='SFFloat'),
      field(accessType='inputOutput',appinfo='default value 0.2',name='ambientIntensity',type='SFFloat')]),
    #  Rendered geometry for the ProtoInstance now follows external prototype declaration 
    Transform(rotation=(-0.8,0.93923,0.18785,5.759586),translation=(-2,1,0),
      children=[
      Shape(DEF='ModulatingBoxShape',
        geometry=Box(),
        appearance=Appearance(
          material=ProtoInstance(DEF='MaterialModulatorInstance',name='MaterialModulator',
            fieldValue=[
            fieldValue(name='enabled',value=True),
            fieldValue(name='diffuseColor',value=(0.5,0.1,0.1))]
            #  fieldValue declarations for other Material attributes can appear here 
            )))]),
    Transform(rotation=(1,0,0,0.523599),translation=(2,1,0),
      children=[
      Shape(
        geometry=Cylinder(),
        appearance=Appearance(
          #  note that ProtoInstance USE does not require name='MaterialModulator' 
          material=ProtoInstance(USE='MaterialModulatorInstance')))]),
    Transform(translation=(-2,3.5,0),
      children=[
      Shape(
        geometry=Text(string=["DEF original"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
        appearance=Appearance(DEF='TextAppearance',
          material=Material(diffuseColor=(0.9,0.9,0.9))))]),
    Transform(translation=(2,3.5,0),
      children=[
      Shape(
        geometry=Text(string=["USE copy"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
        appearance=Appearance(USE='TextAppearance'))]),
    Transform(translation=(0,-2,0),
      children=[
      Shape(
        geometry=Text(string=["enable/disable","MaterialModulator"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(USE='TextAppearance')),
      #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
      Shape(
        geometry=Box(size=(8,2,.001)),
        appearance=Appearance(
          material=Material(transparency=1))),
      #  Toggle text to enable/disable MaterialModulator 
      TouchSensor(DEF='TouchTextInterface',description='Select text to enable/disable MaterialModulator'),
      BooleanToggle(DEF='EventToggler'),
      ROUTE(fromField='isActive',fromNode='TouchTextInterface',toField='set_boolean',toNode='EventToggler'),
      ROUTE(fromField='toggle',fromNode='EventToggler',toField='enabled',toNode='MaterialModulatorInstance')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MaterialModulatorExamples.py")
