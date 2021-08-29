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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_12',geoSystem=['GDC'],position=(40.95291395417769,29.17931591246088,28604.634182705922),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.95291395417769,29.17931591246088,0.0),range=34325.562,child1Url=['../../tiles/3/bosphorus2-4.x3d'],child2Url=['../../tiles/3/bosphorus2-5.x3d'],child3Url=['../../tiles/3/bosphorus3-4.x3d'],child4Url=['../../tiles/3/bosphorus3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[0,-1,-1,-1,-2,0,-2,0,0,-1,-2,0,-1,0,0,0,-11,1,0,17,26,36,0,0,-1,-2,-3,-2,142,0,0,0,0,-1,0,0,7,-2,-19,41,3,13,53,102,-1,0,0,-1,-1,-1,115,-1,0,0,0,-1,0,-5,-3,0,6,5,31,98,122,185,-1,0,-1,0,0,0,60,52,-1,0,0,-1,-2,0,3,3,2,4,52,76,115,86,-1,0,147,2,49,0,0,-1,0,0,4,0,0,0,9,43,39,34,46,20,71,61,-1,-1,1,-2,0,1,-1,-2,0,-2,0,7,23,27,30,72,83,82,74,64,55,30,0,-2,0,0,0,-1,-1,-5,-1,2,31,76,56,57,77,190,143,108,106,92,86,47,0,97,0,0,-3,1,-2,-6,86,25,38,59,103,130,155,207,151,155,133,101,72,63,0,0,0,0,0,0,-6,8,37,50,53,90,114,171,333,293,236,212,141,103,77,108,0,0,0,0,0,3,2,18,77,192,142,181,146,217,288,400,412,197,145,115,94,103,0,-1,-1,-3,-1,1,16,35,75,219,321,228,203,235,212,439,354,206,156,156,128,132,0,0,-2,-3,2,37,45,63,151,197,252,209,212,207,227,254,202,153,134,113,201,179,-3,-1,12,19,40,52,39,86,233,270,277,184,176,167,162,148,146,126,202,138,91,129,0,17,41,50,73,72,93,110,159,265,218,179,141,129,123,108,116,169,252,154,129,96,20,34,38,32,58,67,93,120,115,150,161,166,136,118,109,100,109,153,220,217,163,129,15,32,17,46,31,69,72,84,128,140,147,150,127,115,127,124,130,114,112,120,109,132,25,61,68,104,74,78,93,126,134,160,136,141,143,126,127,128,98,108,93,100,88,82,77,103,158,142,120,129,146,161,134,138,138,156,138,122,112,144,99,117,222,122,87,86,70,90,119,212,135,130,130,146,107,124,128,162,157,141,108,124,120,150,168,148,140,134,-2,21,150,111,107,127,126,157,171,200,168,166,206,186,134,165,171,182,312,256,161,134,0,23,146,107,111,126,124,158,179,196,167,168,208,188,133,165,175,179,297,246,161,132],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
