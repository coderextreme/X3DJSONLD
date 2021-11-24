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
    meta(content='HelloWorldSignedDecrypted.x3d',name='title'),
    meta(content='Simple X3D example with XML digital signature for author authentication, also used for example combined with encryption',name='description'),
    meta(content='2 July 2008',name='created'),
    meta(content='6 July 2008',name='modified'),
    meta(content='Don Brutzman, Mike Bailey',name='creator'),
    meta(content='X3dSecurityReadMe.html',name='reference'),
    meta(content='keystore/SelectSigningKeyPair.png',name='reference'),
    meta(content='keystore/PublicPrivatePair_certificateChain.cer',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HelloWorld.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedEncryptedResult.xml',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSigned.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedDecrypted.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license'),
    meta(content='X3D security, XML signature authentication, public private key pair, XML encryption, secret key',name='subject')]),
  Scene=Scene(
    #  Example scene to illustrate X3D tags and attributes. 
    children=[
    Group(bboxCenter=(0,0,0),bboxSize=(-1,-1,-1),
      children=[
      Viewpoint(centerOfRotation=(0,-1,0),description='Hello world!',fieldOfView=0.7854,jump=True,orientation=(0,0,1,0),position=(0,-1,7),retainUserOffsets=False),
      Transform(bboxCenter=(0,0,0),bboxSize=(-1,-1,-1),center=(0,0,0),rotation=(0,1,0,3),scale=(1,1,1),scaleOrientation=(0,0,1,0),translation=(0,0,0),
        children=[
        Shape(bboxCenter=(0,0,0),bboxSize=(-1,-1,-1),
          geometry=Sphere(radius=1,solid=True),
          appearance=Appearance(
            material=Material(ambientIntensity=0.2,diffuseColor=(0,0.5,1),emissiveColor=(0,0,0),shininess=0.2,specularColor=(0,0,0),transparency=0),
            texture=ImageTexture(repeatS=True,repeatT=True,url=["../earth-topo.png","../earth-topo.jpg","../earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
      Transform(bboxCenter=(0,0,0),bboxSize=(-1,-1,-1),center=(0,0,0),rotation=(0,0,1,0),scale=(1,1,1),scaleOrientation=(0,0,1,0),translation=(0,-2,0),
        children=[
        Shape(bboxCenter=(0,0,0),bboxSize=(-1,-1,-1),
          geometry=Text(maxExtent=0.0,solid=False,string=["Hello","world!"],
            fontStyle=FontStyle(family=["SERIF"],horizontal=True,justify=["MIDDLE","MIDDLE"],leftToRight=True,size=1.0,spacing=1.0,style_='PLAIN',topToBottom=True)),
          appearance=Appearance(
            material=Material(ambientIntensity=0.2,diffuseColor=(0.1,0.5,1),emissiveColor=(0,0,0),shininess=0.2,specularColor=(0,0,0),transparency=0)))])])]),
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloWorldSignedDecrypted.py")
