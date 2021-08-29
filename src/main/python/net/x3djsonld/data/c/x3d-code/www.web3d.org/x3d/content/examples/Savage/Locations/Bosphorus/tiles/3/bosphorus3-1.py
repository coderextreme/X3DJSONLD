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
    GeoViewpoint(description='GeoViewpoint_3_31',geoSystem=['GDC'],position=(41.0075820664573,28.660044773738264,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,28.660044773738264,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-2.x3d'],child2Url=['../../tiles/4/bosphorus6-3.x3d'],child3Url=['../../tiles/4/bosphorus7-2.x3d'],child4Url=['../../tiles/4/bosphorus7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,0,0,0,0,-2,-1,0,-1,-1,-1,-3,-3,0,0,0,0,0,-2,0,-2,-1,0,0,0,0,2,0,0,-1,0,-2,0,-1,0,0,0,0,1,0,-1,0,0,-1,-1,-1,-2,0,0,3,0,0,0,0,3,0,1,0,-3,1,0,-3,0,-1,-2,0,-1,0,0,-2,-6,-3,-2,2,1,-7,0,-5,-4,-2,-1,0,0,0,-2,-2,2,2,0,0,-2,0,16,33,19,19,14,14,2,9,2,0,41,-1,2,0,-2,0,0,1,2,-2,4,29,70,90,62,33,59,54,44,53,21,6,8,9,0,-4,-4,0,0,0,-1,-3,20,52,83,98,99,75,44,95,112,106,82,65,47,2,9,20,31,38,41,37,0,-5,13,34,71,109,126,101,74,87,125,122,112,83,23,7,21,58,68,70,67,65,0,0,24,75,70,114,144,136,99,86,132,134,114,60,12,14,49,80,94,81,71,65,-3,-3,64,74,99,134,152,126,85,87,137,133,88,26,13,32,78,104,100,83,49,28,0,-2,24,87,140,166,158,150,108,135,131,136,75,20,27,38,87,113,104,87,38,3,0,-2,35,99,151,180,173,148,153,144,128,141,75,26,48,93,107,120,111,62,10,0,-3,0,16,115,119,182,184,154,165,155,142,109,64,26,62,127,119,124,77,15,16,7,0,-3,3,37,105,159,196,183,176,169,144,93,50,37,88,141,132,110,49,-9,-1,-4,-5,4,17,66,135,182,194,198,189,171,137,82,32,62,117,115,115,81,22,0,8,19,5,11,42,59,85,169,194,197,177,168,104,60,52,89,133,93,73,54,5,0,19,24,25,42,98,106,168,191,183,178,132,83,88,43,68,112,122,85,35,28,0,11,39,30,4,13,39,67,91,185,183,123,121,133,75,52,93,128,112,85,38,9,2,19,40,29,5,15,29,89,144,167,187,158,172,112,61,78,103,123,90,59,34,2,3,32,27,10,1,26,34,48,101,147,191,173,162,116,64,116,125,110,91,57,11,5,11,37,6,5,2,37,40,70,115,147,178,173,113,113,70,104,134,104,82,30,6,9,18,25,6,0,3,37,42,69,121,151,177,172,111,108,71,101,135,99,81,27,6,9,19,25,6,-1],
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
