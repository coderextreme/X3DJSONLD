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
    meta(content='Sky.x3d',name='title'),
    meta(content='Sky overhead image',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='3 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/Sky.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers/Sky.png',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers/Sky.wrl',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/Sky.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Sky.x3d'),
    Background(skyColor=[(0.8,0.2,0.4)]),
    ProtoDeclare(name='Sky',
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProximitySensor(DEF='Proxi',size=(1.0E30,1.0E30,1.0E30)),
          Transform(DEF='TrSky',
            children=[
            Transform(rotation=(0.0,1.0,0.0,-1.5),scale=(300.0,200.0,300.0),
              children=[
              Shape(
                appearance=Appearance(
                  texture=ImageTexture(url=["Sky.png","https://www.web3d.org/x3d/content/examples/Basic/Followers/Sky.png"])),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,1,-1,12,2,1,-1,1,11,12,-1,13,3,2,-1,2,12,13,-1,14,4,3,-1,3,13,14,-1,15,5,4,-1,4,14,15,-1,16,6,5,-1,5,15,16,-1,17,7,6,-1,6,16,17,-1,18,8,7,-1,7,17,18,-1,19,9,8,-1,8,18,19,-1,20,10,9,-1,9,19,20,-1,11,1,10,-1,10,20,11,-1,22,12,11,-1,11,21,22,-1,23,13,12,-1,12,22,23,-1,24,14,13,-1,13,23,24,-1,25,15,14,-1,14,24,25,-1,26,16,15,-1,15,25,26,-1,27,17,16,-1,16,26,27,-1,28,18,17,-1,17,27,28,-1,29,19,18,-1,18,28,29,-1,30,20,19,-1,19,29,30,-1,21,11,20,-1,20,30,21,-1],creaseAngle=4.0,solid=False,
                  texCoord=TextureCoordinate(point=[(0.5,0.5),(0.335,0.5),(0.366,0.398),(0.449,0.335),(0.551,0.335),(0.634,0.398),(0.665,0.5),(0.634,0.602),(0.551,0.665),(0.449,0.665),(0.366,0.602),(0.181,0.5),(0.242,0.303),(0.401,0.181),(0.599,0.181),(0.758,0.303),(0.819,0.5),(0.758,0.697),(0.599,0.819),(0.401,0.819),(0.242,0.697),(0.05,0.5),(0.136,0.222),(0.361,0.05),(0.639,0.05),(0.864,0.222),(0.95,0.5),(0.864,0.778),(0.639,0.95),(0.361,0.95),(0.136,0.778)]),
                  coord=Coordinate(point=[(0.0,1.0,0.0),(0.0,0.883,-0.367),(-0.227,0.883,-0.297),(-0.367,0.883,-0.114),(-0.367,0.883,0.114),(-0.227,0.883,0.297),(0.0,0.883,0.367),(0.227,0.883,0.297),(0.367,0.883,0.115),(0.367,0.883,-0.114),(0.227,0.883,-0.297),(0.0,0.542,-0.709),(-0.438,0.542,-0.573),(-0.709,0.542,-0.219),(-0.709,0.542,0.219),(-0.438,0.542,0.573),(0.0,0.542,0.709),(0.438,0.542,0.573),(0.709,0.542,0.219),(0.709,0.542,-0.219),(0.438,0.542,-0.573),(0.0,0.0,-1.0),(-0.618,0.0,-0.809),(-1.0,0.0,-0.309),(-1.0,0.0,0.309),(-0.618,0.0,0.809),(0.0,0.0,1.0),(0.618,0.0,0.809),(1.0,0.0,0.309),(1.0,0.0,-0.309),(0.618,0.0,-0.809)])))])])])])),
    ProtoInstance(name='Sky')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sky.py")
