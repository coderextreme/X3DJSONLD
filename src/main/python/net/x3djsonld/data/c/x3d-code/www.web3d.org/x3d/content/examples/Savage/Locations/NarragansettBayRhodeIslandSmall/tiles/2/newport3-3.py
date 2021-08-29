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
    GeoLOD(center=(41.664072528870314,-71.20887957792968,0.0),range=8600.306,child1Url=['../../tiles/3/newport6-6.x3d'],child2Url=['../../tiles/3/newport6-7.x3d'],child3Url=['../../tiles/3/newport7-6.x3d'],child4Url=['../../tiles/3/newport7-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0030746125,zDimension=22,zSpacing=0.0030746125,height=[4,1,1,1,1,1,1,2,1,1,6,37,45,38,32,29,50,48,40,40,44,49,1,3,3,1,1,1,1,3,1,1,7,36,52,47,48,55,54,50,42,51,46,51,2,2,2,4,2,2,2,8,1,1,3,28,42,54,63,59,63,54,44,43,56,58,1,1,1,1,6,7,3,7,1,1,2,27,39,60,73,61,62,53,54,49,63,65,1,1,1,1,2,4,4,7,1,1,1,24,39,50,69,65,64,61,55,58,54,63,1,1,1,1,1,1,1,2,1,1,1,14,27,49,67,66,65,70,69,74,56,60,1,1,1,1,1,1,1,1,1,1,1,1,30,54,73,79,80,70,72,73,60,68,1,1,1,1,1,1,1,1,1,1,1,1,39,66,69,79,94,85,76,75,63,65,1,1,1,1,1,1,1,1,1,1,1,1,22,54,62,62,75,78,82,77,62,55,1,1,1,1,1,1,1,1,1,1,1,1,2,31,41,57,66,75,85,78,67,55,1,1,1,1,1,1,1,1,1,1,1,1,1,7,27,48,62,72,82,71,61,53,1,1,1,1,1,1,1,1,1,1,1,1,1,1,13,41,56,64,72,67,68,55,10,6,1,1,1,1,1,1,1,1,1,1,1,1,1,11,31,54,69,67,57,55,35,13,1,1,1,1,1,1,1,1,1,1,1,1,1,3,12,48,71,66,55,54,50,26,1,1,1,1,1,1,1,1,1,1,1,1,1,2,8,28,62,77,61,54,31,21,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,17,38,60,60,54,23,15,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,18,30,45,54,64,16,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,22,36,43,54,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,25,34,40,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,14,20,26,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,12,11,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,11],
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
