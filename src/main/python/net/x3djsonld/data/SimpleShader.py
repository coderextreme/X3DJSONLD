####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=1,name='Shaders'),
    meta(content='SimpleShader.x3d',name='title'),
    meta(content='Simple shader example',name='description'),
    meta(content='John Stewart',name='creator'),
    meta(content='Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick',name='translator'),
    meta(content='26 May 2009',name='created'),
    meta(content='15 October 2009',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.opengl.org/wiki/Fragment_Shader',name='reference'),
    meta(content='http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader',name='reference'),
    meta(content='https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest',name='reference'),
    meta(content='X3D shader example',name='subject'),
    meta(content='originals/simpleShader.x3dv',name='reference'),
    meta(content='ShaderTutorialInstantReality.pdf',name='reference'),
    meta(content='Titania V3.0.3, http://titania.create3000.de',name='generator'),
    meta(content='World of Titania',name='info'),
    meta(content='nicest',name='outputStyle'),
    # meta content='under development' name='warning'/
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='myPrototype',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='myInputRange',type='SFVec3f',value=(0.95,0.44,0.22))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='TR',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.9)),
              shaders=[
              ComposedShader(language='GLSL',
                field=[
                field(accessType='initializeOnly',name='decis',type='SFVec3f')],
                IS=IS(
                  connect=[
                  connect(nodeField='decis',protoField='myInputRange')]),
                parts=[
                ShaderPart(),
                ShaderPart(type='FRAGMENT')]),
              ComposedShader(DEF='Cobweb',language='GLSL',
                field=[
                field(accessType='initializeOnly',name='decis',type='SFVec3f',value=(0.95,0.77,0.44))],
                parts=[
                ShaderPart(),
                ShaderPart(DEF='_1',type='FRAGMENT')])]),
            geometry=Sphere(radius=1.75))])])),
    WorldInfo(title='SimpleShader',
      metadata=MetadataSet(DEF='Titania',name='Titania',reference='http://titania.create3000.de',
        value=[
        MetadataSet(DEF='Selection',name='Selection',reference='http://titania.create3000.de',
          value=[
          MetadataSet(DEF='nodes',name='nodes',reference='http://titania.create3000.de',
            #  NULL 
            )]),
        MetadataSet(DEF='NavigationInfo',name='NavigationInfo',reference='http://titania.create3000.de',
          value=[
          MetadataString(DEF='type',name='type',reference='http://titania.create3000.de',value=["EXAMINE"])]),
        MetadataSet(DEF='Viewpoint',name='Viewpoint',reference='http://titania.create3000.de',
          value=[
          MetadataDouble(DEF='position',name='position',reference='http://titania.create3000.de',value=[6.24067728185014,0.00250837343276661,2.92117542307615]),
          MetadataDouble(DEF='orientation',name='orientation',reference='http://titania.create3000.de',value=[-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]),
          MetadataDouble(DEF='centerOfRotation',name='centerOfRotation',reference='http://titania.create3000.de',value=[-0.808320198626341,-0.358072370409949,0.22817191560906])])])),
    ProtoInstance(name='myPrototype')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for SimpleShader.py:')
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

print("python SimpleShader.py load and self-test diagnostics complete.")
