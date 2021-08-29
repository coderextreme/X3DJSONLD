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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SceneNodePrototype.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='19 December 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Expose functionality of Browser class in Java/ECMAscript annexes of VRML 97 specification. Consider promotion to a native node in X3D/VRML 200x scenes.',name='description'),
    meta(content='Under development, many of these exposed attributes will be eliminated. Scene node will not be used in X3D proper, but may become a valuable prototype via SAI scripting.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/SceneNodePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SceneNodePrototype.x3d'),
    ProtoDeclare(name='Scene',
      ProtoInterface=ProtoInterface(
        #  Standard browser attributes exposed via VRML 97 Script annexes 
        field=[
        field(accessType='inputOnly',name='createVrmlFromString',type='SFString'),
        field(accessType='inputOnly',name='createVrmlFromURL',type='SFString'),
        field(accessType='outputOnly',name='createdVrmlNodes',type='MFNode'),
        field(accessType='outputOnly',name='currentFrameRate',type='SFFloat'),
        field(accessType='outputOnly',name='currentSpeed',type='SFFloat'),
        field(accessType='inputOnly',name='description',type='SFString'),
        field(accessType='inputOnly',name='evaluate',type='SFBool'),
        field(accessType='inputOnly',name='loadUrl',type='SFString'),
        field(accessType='inputOnly',name='loadUrlParameter',type='SFString'),
        field(accessType='outputOnly',name='name',type='SFString'),
        field(accessType='inputOnly',name='replaceWorld',type='MFNode'),
        field(accessType='outputOnly',name='version',type='SFString'),
        field(accessType='outputOnly',name='worldUrl',type='SFString'),
        field(accessType='inputOnly',name='addRoute',type='SFBool'),
        field(accessType='inputOnly',name='deleteRoute',type='SFBool'),
        field(accessType='inputOnly',name='fromNode',type='SFNode'),
        field(accessType='inputOnly',name='fromEventOut',type='SFString'),
        field(accessType='inputOnly',name='toNode',type='SFNode'),
        field(accessType='inputOnly',name='toEventIn',type='SFString'),
        #  Candidate additions 
        field(accessType='outputOnly',name='boundBackground',type='SFNode'),
        field(accessType='outputOnly',name='boundFog',type='SFNode'),
        field(accessType='outputOnly',name='boundGeoViewpoint',type='SFNode'),
        field(accessType='outputOnly',name='boundNavigationInfo',type='SFNode'),
        field(accessType='outputOnly',name='boundViewpoint',type='SFNode'),
        field(accessType='outputOnly',name='response',type='MFString'),
        field(accessType='inputOutput',name='dashboardVisible',type='SFBool',value=True),
        field(accessType='inputOutput',name='pixelWidth',type='SFInt32',value=-1),
        field(accessType='inputOutput',name='pixelHeight',type='SFInt32',value=-1)]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='BrowserScript',directOutput=True,
          field=[
          field(accessType='inputOnly',name='createVrmlFromString',type='SFString'),
          field(accessType='inputOnly',name='createVrmlFromURL',type='SFString'),
          field(accessType='outputOnly',name='createdVrmlNodes',type='MFNode'),
          field(accessType='outputOnly',name='currentFrameRate',type='SFFloat'),
          field(accessType='outputOnly',name='currentSpeed',type='SFFloat'),
          field(accessType='inputOnly',name='description',type='SFString'),
          field(accessType='inputOnly',name='evaluate',type='SFBool'),
          field(accessType='inputOnly',name='loadUrl',type='SFString'),
          field(accessType='inputOnly',name='loadUrlParameter',type='SFString'),
          field(accessType='outputOnly',name='name',type='SFString'),
          field(accessType='inputOnly',name='replaceWorld',type='MFNode'),
          field(accessType='outputOnly',name='version',type='SFString'),
          field(accessType='outputOnly',name='worldUrl',type='SFString'),
          field(accessType='inputOnly',name='addRoute',type='SFBool'),
          field(accessType='inputOnly',name='deleteRoute',type='SFBool'),
          field(accessType='inputOnly',name='fromNode',type='SFNode'),
          field(accessType='inputOnly',name='fromEventOut',type='SFString'),
          field(accessType='inputOnly',name='toNode',type='SFNode'),
          field(accessType='inputOnly',name='toEventIn',type='SFString'),
          field(accessType='outputOnly',name='response',type='MFString')],
          IS=IS(
            connect=[
            connect(nodeField='createVrmlFromString',protoField='createVrmlFromString'),
            connect(nodeField='createVrmlFromURL',protoField='createVrmlFromURL'),
            connect(nodeField='createdVrmlNodes',protoField='createdVrmlNodes'),
            connect(nodeField='currentFrameRate',protoField='currentFrameRate'),
            connect(nodeField='currentSpeed',protoField='currentSpeed'),
            connect(nodeField='description',protoField='description'),
            connect(nodeField='evaluate',protoField='evaluate'),
            connect(nodeField='loadUrl',protoField='loadUrl'),
            connect(nodeField='loadUrlParameter',protoField='loadUrlParameter'),
            connect(nodeField='name',protoField='name'),
            connect(nodeField='replaceWorld',protoField='replaceWorld'),
            connect(nodeField='version',protoField='version'),
            connect(nodeField='worldUrl',protoField='worldUrl'),
            connect(nodeField='addRoute',protoField='addRoute'),
            connect(nodeField='deleteRoute',protoField='deleteRoute'),
            connect(nodeField='fromNode',protoField='fromNode'),
            connect(nodeField='fromEventOut',protoField='fromEventOut'),
            connect(nodeField='toNode',protoField='toNode'),
            connect(nodeField='toEventIn',protoField='toEventIn'),
            connect(nodeField='response',protoField='response')]))])),
    #  Example invocation 
    ProtoInstance(DEF='SceneNode',name='Scene'),
    Shape(
      geometry=Text(DEF='Output3dText',string=["Click text for partial Scene node test"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
      appearance=Appearance(
        material=Material(diffuseColor=(0,0.6,0.6)))),
    TouchSensor(DEF='ClickTextSensor',description='Click text for partial Scene node test'),
    Script(DEF='AssembleBrowserOutputText',
      field=[
      field(accessType='inputOnly',name='currentFrameRate',type='SFFloat'),
      field(accessType='inputOnly',name='currentSpeed',type='SFFloat'),
      field(accessType='inputOnly',name='name',type='SFString'),
      field(accessType='inputOnly',name='version',type='SFString'),
      field(accessType='inputOnly',name='worldUrl',type='SFString'),
      field(accessType='outputOnly',name='evaluatedResult',type='MFString')]),
    ROUTE(fromField='isActive',fromNode='ClickTextSensor',toField='evaluate',toNode='SceneNode'),
    ROUTE(fromField='currentFrameRate',fromNode='SceneNode',toField='currentFrameRate',toNode='AssembleBrowserOutputText'),
    ROUTE(fromField='currentSpeed',fromNode='SceneNode',toField='currentSpeed',toNode='AssembleBrowserOutputText'),
    ROUTE(fromField='version',fromNode='SceneNode',toField='version',toNode='AssembleBrowserOutputText'),
    ROUTE(fromField='name',fromNode='SceneNode',toField='name',toNode='AssembleBrowserOutputText'),
    ROUTE(fromField='worldUrl',fromNode='SceneNode',toField='worldUrl',toNode='AssembleBrowserOutputText'),
    ROUTE(fromField='evaluatedResult',fromNode='AssembleBrowserOutputText',toField='string',toNode='Output3dText')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SceneNodePrototype.py")
