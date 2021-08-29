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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='HelloWorldDecrypted.x3d',name='title'),
    meta(content='Simple X3D example for XML encryption for security; actual encrypted result is in XML file HelloWorldEncryptionResult.xml',name='description'),
    meta(content='HelloWorldEncryptionResult.xml',name='reference'),
    meta(content='2 July 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman, Mike Bailey',name='creator'),
    meta(content='default attribute values removed after decryption',name='info'),
    meta(content='X3dSecurityReadMe.html',name='reference'),
    meta(content='keystore/SelectSigningSecretKey.png',name='reference'),
    meta(content='keystore/SecretKey_key.b64',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HelloWorld.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldEncryptionInput.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldEncryptionResult.xml',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldDecrypted.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='X3D security, XML encryption, secret key',name='subject'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Example scene to illustrate X3D tags and attributes. 
    children=[
    WorldInfo(title='HelloWorldDecrypted.x3d'),
    Group(
      children=[
      Viewpoint(centerOfRotation=(0,-1,0),description='Hello world!',position=(0,-1,7)),
      Transform(rotation=(0,1,0,3),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.5,1)),
            texture=ImageTexture(url=["../earth-topo.png","../earth-topo.jpg","../earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(string=["Hello","world!"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.5,1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloWorldDecrypted.py")
