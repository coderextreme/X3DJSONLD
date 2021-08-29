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
    GeoViewpoint(description='GeoViewpoint_3_32',geoSystem=['GDC'],position=(41.0075820664573,28.80840795623044,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,28.80840795623044,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-4.x3d'],child2Url=['../../tiles/4/bosphorus6-5.x3d'],child3Url=['../../tiles/4/bosphorus7-4.x3d'],child4Url=['../../tiles/4/bosphorus7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[-1,0,0,0,-1,-1,0,-1,0,-1,-2,0,0,-2,-2,1,-2,-2,0,0,0,0,-1,-1,0,0,0,-1,-1,-1,-1,0,0,2,-3,0,-3,0,-2,-1,0,-1,0,-2,0,0,0,0,2,0,0,0,1,0,-5,-1,-1,11,-1,0,0,0,0,-1,1,0,2,-1,-1,0,0,1,0,0,0,1,0,18,5,11,8,-3,0,0,-2,-2,-1,-3,1,2,0,2,0,0,0,0,-1,4,13,24,12,19,17,10,0,-1,-1,-2,0,1,0,1,6,0,0,5,-1,-4,0,33,29,24,20,26,20,5,3,-6,2,-5,4,1,37,25,10,-1,-2,0,-3,13,17,39,38,21,28,26,19,5,1,1,3,12,5,6,65,37,5,2,0,0,29,35,37,52,38,30,37,30,10,3,8,6,7,23,23,18,65,0,-12,5,5,3,29,41,49,57,42,34,34,8,4,8,10,9,12,33,24,13,28,0,0,0,-7,2,57,50,59,61,45,42,10,10,10,17,10,16,33,38,24,20,3,2,-2,1,-12,23,67,72,67,66,49,16,8,24,23,38,22,35,40,47,34,34,0,1,-5,-2,-5,21,75,80,69,73,38,8,22,48,37,45,24,63,57,51,46,36,7,3,-4,-1,-7,6,37,89,91,79,25,13,48,64,54,49,29,78,60,69,27,20,-4,-3,-1,-6,0,2,15,72,90,90,20,16,66,83,62,53,24,71,74,77,22,27,19,3,0,21,6,22,16,64,97,66,16,19,58,77,67,62,26,75,78,42,24,28,24,6,10,19,25,30,58,54,102,53,17,19,43,92,73,68,28,87,61,73,28,31,30,4,-2,35,36,35,53,84,94,48,20,27,52,94,82,46,31,83,82,82,33,45,29,0,-2,37,23,27,74,111,95,62,24,41,67,103,92,39,41,85,92,75,53,69,10,8,5,18,18,6,58,73,123,74,28,33,68,110,94,52,47,101,105,49,70,86,5,1,0,26,18,35,43,63,115,57,28,47,72,114,90,73,42,98,77,50,84,90,0,-4,18,70,61,56,47,51,93,63,32,41,61,104,85,78,50,72,67,78,84,74,-1,-7,18,68,61,55,46,51,90,61,31,43,61,102,86,78,51,72,66,79,83,74],
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
