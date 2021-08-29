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
    GeoViewpoint(description='GeoViewpoint_3_33',geoSystem=['GDC'],position=(41.0075820664573,28.956771138722615,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,28.956771138722615,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-6.x3d'],child2Url=['../../tiles/4/bosphorus6-7.x3d'],child3Url=['../../tiles/4/bosphorus7-6.x3d'],child4Url=['../../tiles/4/bosphorus7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,0,0,0,0,-2,0,0,0,0,0,0,0,1,0,1,-1,0,0,1,0,0,-2,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,-1,-2,-1,0,0,0,0,0,0,0,0,0,1,0,1,1,-3,0,0,-1,0,0,-1,-2,0,0,0,0,0,0,0,0,1,0,-1,0,0,-1,1,-3,0,-1,0,0,-1,0,3,0,0,0,0,0,2,1,0,0,1,0,0,-1,1,0,-1,0,-2,-2,-3,0,0,0,-2,0,1,0,0,0,0,0,0,0,3,-1,6,11,0,-1,0,0,-3,0,-2,2,0,0,0,1,1,0,1,-1,-1,-4,0,-1,18,3,4,2,-2,0,-4,0,0,0,-1,2,0,0,-1,0,0,0,1,2,5,1,13,1,21,16,4,0,0,-1,0,0,7,1,2,0,0,1,0,0,2,0,38,32,20,1,27,33,16,0,6,-3,0,0,2,0,2,4,2,0,0,3,-3,1,24,21,34,5,17,38,33,9,22,1,1,2,-7,0,0,1,-2,2,0,0,1,1,27,30,36,11,35,46,35,19,34,18,-2,0,1,2,0,0,2,5,2,1,0,23,7,7,20,37,21,60,39,25,33,45,43,7,12,14,29,38,12,0,3,0,3,31,26,21,27,58,33,39,59,34,46,57,55,23,33,56,50,41,48,0,-1,-2,19,52,55,38,28,74,49,28,56,48,64,58,27,36,45,50,22,7,8,1,-5,3,47,47,75,83,31,73,59,33,73,67,61,38,45,67,50,8,-10,3,-7,-2,-3,-3,45,33,60,70,45,80,67,51,81,79,61,49,62,66,26,1,12,46,6,0,4,0,-1,36,61,78,69,88,45,57,93,82,68,66,61,19,0,10,6,77,77,7,-4,-34,0,1,56,80,86,53,48,77,94,77,77,49,26,-2,13,34,8,42,77,66,0,2,0,0,2,5,90,83,46,98,103,93,78,42,1,0,55,77,26,73,48,60,54,12,8,5,14,3,74,82,66,88,111,103,55,11,6,43,41,69,30,58,86,75,75,62,79,58,6,5,74,81,65,87,112,103,64,14,8,42,47,73,31,57,90,77,74,61,83,63,7,7],
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
