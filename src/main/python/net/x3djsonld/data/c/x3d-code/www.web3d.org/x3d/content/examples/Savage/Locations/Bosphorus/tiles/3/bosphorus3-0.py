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
    GeoViewpoint(description='GeoViewpoint_3_30',geoSystem=['GDC'],position=(41.0075820664573,28.511681591246088,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,28.511681591246088,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-0.x3d'],child2Url=['../../tiles/4/bosphorus6-1.x3d'],child3Url=['../../tiles/4/bosphorus7-0.x3d'],child4Url=['../../tiles/4/bosphorus7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[-1,0,-2,0,-2,0,-1,0,0,0,0,0,0,1,-3,0,0,0,-2,-2,0,0,0,0,-1,-1,0,0,0,-1,0,0,0,0,-1,-1,0,0,-3,-1,0,0,0,0,-1,0,-2,0,0,0,1,0,0,0,0,0,0,0,-1,0,-2,0,0,-1,1,-1,0,-2,0,0,-3,0,-1,0,0,0,-4,-2,0,-3,-1,2,0,-1,0,2,0,-1,0,-1,0,0,0,0,0,-1,0,0,0,0,-2,0,0,0,0,0,1,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,2,0,0,-1,2,0,-1,0,-2,0,-1,-1,0,0,-1,0,-1,0,0,-1,-1,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,0,0,0,0,0,1,-4,0,0,-1,0,0,-1,-1,-2,-4,0,0,1,0,0,2,-2,0,-2,-1,0,-2,0,1,0,0,-1,0,0,-2,-1,1,0,0,0,0,-1,-2,4,51,1,-2,-1,0,0,0,-3,0,0,0,0,-1,-1,0,-1,0,0,-1,-1,13,32,47,5,-1,-1,0,0,4,0,2,0,0,0,-2,0,-1,-1,-2,0,5,26,26,52,53,15,0,-4,0,1,0,0,0,-1,-2,-3,-1,1,-3,-6,-2,7,33,49,59,72,62,36,-2,0,0,-2,-1,-3,0,-2,-2,1,0,-1,-2,8,27,33,63,78,78,83,67,48,26,-3,1,0,-1,0,0,0,-3,0,-3,2,17,53,88,63,117,104,114,99,74,44,25,5,-3,-3,0,-5,1,0,0,-7,0,13,54,117,132,92,127,149,137,122,86,35,7,2,1,2,3,5,0,-6,-1,-3,7,34,98,166,139,114,137,151,130,110,94,41,11,5,3,3,10,25,-1,-1,7,9,20,58,110,151,133,110,109,137,95,71,85,53,15,-4,4,0,0,4,7,14,24,27,53,90,128,155,120,102,91,110,123,54,51,53,21,5,8,1,1,5,25,41,58,65,95,118,126,149,110,92,65,93,102,84,30,9,64,8,0,0,1,1,66,79,106,111,124,129,117,109,105,81,52,57,89,24,42,3,22,-5,2,0,2,2,69,83,112,114,126,128,118,106,102,86,51,54,83,23,36,3,16,-13,1,-1,2,3],
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
