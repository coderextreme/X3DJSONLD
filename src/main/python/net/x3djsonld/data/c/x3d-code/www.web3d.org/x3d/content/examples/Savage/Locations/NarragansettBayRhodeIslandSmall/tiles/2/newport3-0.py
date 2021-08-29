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
    GeoLOD(center=(41.664072528870314,-71.40258016458995,0.0),range=8600.306,child1Url=['../../tiles/3/newport6-0.x3d'],child2Url=['../../tiles/3/newport6-1.x3d'],child3Url=['../../tiles/3/newport7-0.x3d'],child4Url=['../../tiles/3/newport7-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=22,zSpacing=0.0030746125,height=[27,13,11,13,16,13,16,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,16,13,13,13,12,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,20,15,13,16,14,15,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,21,14,18,15,13,9,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,19,12,14,18,10,8,5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,17,12,11,16,16,16,16,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,2,11,18,16,17,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,2,0,6,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,12,10,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,14,12,17,15,8,8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,12,15,15,12,13,9,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,22,22,16,15,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,14,2,0,0,0,0,0,0,0,0,0,0,0,0,12,18,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,24,27,17,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,23,31,26,21,6,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,24,33,31,25,8,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,19,26,39,29,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,1,16,30,45,35,22,1,1,0,4,6,4,3,9,8,7,0,0,0,3,4,4,0,3,15,29,47,34,22,4,4,0,13,12,10,10,7,3,5,6,6,0,6,10,2,0,6,17,31,40,25,18,9,9,11,16,18,15,13,13,10,12,12,1,6,9,9,3,0,2,8,25,31,24,21,24,23,12,16,18,15,13,13,11,13,12,0,7,9,9,3,0,1,8,24,30,25,20,23,22],
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
