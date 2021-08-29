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
    GeoViewpoint(description='GeoViewpoint_3_70',geoSystem=['GDC'],position=(41.44492696469422,28.511681591246088,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.44492696469422,28.511681591246088,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus14-0.x3d'],child2Url=['../../tiles/4/bosphorus14-1.x3d'],child3Url=['../../tiles/4/bosphorus15-0.x3d'],child4Url=['../../tiles/4/bosphorus15-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus7-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.390258852414604,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[8,6,8,4,24,60,88,55,39,59,76,49,61,5,11,16,20,4,1,9,13,12,11,5,8,8,61,81,51,87,12,20,86,11,1,0,-2,6,0,3,2,13,8,6,29,4,4,13,52,79,68,64,7,70,34,19,0,2,14,4,5,27,37,-1,0,0,31,12,6,3,3,42,36,7,9,38,8,2,1,9,55,29,15,52,8,0,0,1,11,5,6,4,0,27,44,5,-3,2,5,0,5,43,54,28,8,0,0,-1,0,0,8,7,6,6,3,1,3,6,9,22,11,15,50,16,6,-3,1,0,0,0,0,-1,15,12,23,26,6,5,3,23,50,39,27,29,13,-1,1,0,1,0,-1,-4,1,-2,36,28,45,32,21,8,26,39,54,30,2,-2,0,0,0,-1,0,3,0,-1,-1,0,30,51,65,31,43,43,47,37,-4,0,-3,0,-1,0,0,0,0,-3,0,1,0,0,38,49,50,28,55,71,1,-1,0,0,0,0,0,0,0,0,-2,0,0,0,0,0,46,62,49,52,47,-5,-3,0,0,-1,0,0,-1,1,0,0,0,0,0,0,0,0,36,69,36,0,1,0,-1,1,0,0,1,0,0,-1,-2,-1,0,0,0,0,-2,0,21,2,2,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,-1,0,1,0,0,1,-2,3,0,0,0,-1,0,0,-1,0,0,-1,0,0,0,0,0,0,-2,-1,0,0,0,0,0,0,-1,0,-1,0,-2,1,0,-3,0,-1,0,2,0,0,0,1,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,-2,0,0,1,2,0,0,0,0,-1,0,-1,1,0,0,0,-1,0,0,0,0,-1,1,0,0,-1,0,0,0,0,0,0,0,-1,0,1,0,0,0,-1,0,0,-1,0,-1,1,-3,0,-1,0,0,-1,0,0,0,0,0,0,0,0,0,2,0,0,-1,0,0,0,1,0,0,-2,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,1,-1,0,0,0,0,0,-2,0,0,0,0,-2,0,0,0,0,-1,0,-1,-1,0,-2,0,0,0,0,0,0,-1,-1,0,0,0,-2,0,0,0,0,-1,0,-2,-2,0,-2,1,0],
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
