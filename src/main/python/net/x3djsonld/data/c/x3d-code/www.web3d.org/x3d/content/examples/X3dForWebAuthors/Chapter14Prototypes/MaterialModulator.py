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
    meta(content='MaterialModulator.x3d',name='title'),
    meta(content='Mimic a Material node and modulate the diffuseColor field as an animation effect, provided as a prototype for reusability.',name='description'),
    meta(content='Learning suggestion for authors: try changing the modulation script so that it goes from [0 ... 1] and then [1 ... 0] alternating, rather than abruptly shifting from 1 immediately back to 0.',name='hint'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='10 March 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D prototype requiring Script inputOutput fields',name='subject'),
    meta(content='MaterialModulator.png',name='Image'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulator.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MaterialModulator.x3d'),
    ProtoDeclare(appinfo='mimic a Material node and modulate the diffuseColor field as an animation effect',documentation='http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html',name='MaterialModulator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='default value 0.8 0.8 0.8',name='diffuseColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='default value 0 0 0',name='emissiveColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='default value 0 0 0',name='specularColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='default value 0.0',name='transparency',type='SFFloat',value=0.0),
        field(accessType='inputOutput',appinfo='default value 0.2',name='shininess',type='SFFloat',value=0.2),
        field(accessType='inputOutput',appinfo='default value 0.2',name='ambientIntensity',type='SFFloat',value=0.2)]),
      ProtoBody=ProtoBody(
        children=[
        Material(DEF='MaterialNode',
          IS=IS(
            connect=[
            connect(nodeField='diffuseColor',protoField='diffuseColor'),
            connect(nodeField='emissiveColor',protoField='emissiveColor'),
            connect(nodeField='specularColor',protoField='specularColor'),
            connect(nodeField='transparency',protoField='transparency'),
            connect(nodeField='shininess',protoField='shininess'),
            connect(nodeField='ambientIntensity',protoField='ambientIntensity')])),
        #  Only first node (the node type) is renderable, others are along for the ride 
        Script(DEF='MaterialModulatorScript',
          field=[
          field(accessType='inputOutput',name='enabled',type='SFBool'),
          field(accessType='inputOutput',name='diffuseColor',type='SFColor'),
          field(accessType='outputOnly',name='newColor',type='SFColor'),
          field(accessType='inputOnly',name='clockTrigger',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='diffuseColor',protoField='diffuseColor')])),
        #  Clock tickles Script to wake up and compute a new value 
        ROUTE(fromField='newColor',fromNode='MaterialModulatorScript',toField='diffuseColor',toNode='MaterialNode'),
        TimeSensor(DEF='ModulationClock',cycleInterval=0.1,loop=True,
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled')])),
        ROUTE(fromField='cycleTime',fromNode='ModulationClock',toField='clockTrigger',toNode='MaterialModulatorScript')])),
    #  Rendered geometry for the ProtoInstance now follows prototype declaration 
    Transform(translation=(0,1,0),
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=ProtoInstance(DEF='MaterialModulatorInstance',name='MaterialModulator',
            fieldValue=[
            fieldValue(name='enabled',value=True),
            fieldValue(name='diffuseColor',value=(0.5,0.1,0.1))]
            #  fieldValue declarations for other Material attributes can appear here 
            )))]),
    #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
    Transform(translation=(0,-2,0),
      children=[
      Shape(
        geometry=Text(string=["enable/disable","MaterialModulator"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9)))),
      Shape(
        geometry=Box(size=(8,2,.001)),
        appearance=Appearance(
          material=Material(transparency=1))),
      #  Toggle text to enable/disable MaterialModulator 
      TouchSensor(DEF='TouchTextInterface',description='Select to enable/disable MaterialModulator'),
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

print ("python x3d.py load successful for MaterialModulator.py")
