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
    GeoLOD(center=(41.599505666650224,-71.20887957792968,0.0),range=8600.306,child1Url=['../../tiles/3/newport4-6.x3d'],child2Url=['../../tiles/3/newport4-7.x3d'],child3Url=['../../tiles/3/newport5-6.x3d'],child4Url=['../../tiles/3/newport5-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0030746125,zDimension=23,zSpacing=0.0029348573,height=[47,29,0,0,0,0,0,0,0,0,0,7,13,16,1,1,1,6,10,10,17,22,46,30,0,0,0,0,0,0,0,0,0,5,13,23,6,1,1,2,5,8,19,22,41,25,0,0,0,0,0,0,0,0,0,5,6,5,9,6,10,12,7,9,19,21,36,17,2,0,0,0,0,0,0,0,0,1,1,2,1,1,2,7,9,14,18,23,26,1,0,0,0,0,0,0,0,0,0,1,0,0,1,8,14,11,15,26,24,23,5,0,0,0,0,0,0,0,0,0,0,1,1,1,1,19,16,11,16,31,30,32,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,18,15,10,24,37,37,31,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,20,16,10,39,35,34,34,0,0,0,0,0,0,0,0,0,0,0,2,1,2,1,16,20,12,33,40,34,34,0,0,0,0,0,0,0,0,0,0,0,0,1,1,8,11,10,18,49,36,35,35,0,0,0,0,0,0,0,0,0,0,0,0,0,5,14,5,7,17,49,41,48,45,0,0,0,0,0,0,0,0,0,0,0,0,4,11,7,7,7,11,46,48,45,43,0,0,0,0,0,0,0,0,0,0,0,7,11,6,0,2,10,18,38,44,44,40,3,0,0,0,0,0,0,0,0,0,3,15,17,0,0,1,12,19,45,49,46,37,6,0,0,0,0,0,0,0,0,0,12,21,7,0,0,3,11,38,46,57,49,39,2,0,0,0,0,0,0,0,0,0,15,10,0,0,0,4,22,41,57,61,55,47,6,0,0,0,0,0,0,0,0,0,12,0,0,0,10,29,25,35,53,64,57,43,5,0,0,0,0,0,0,0,0,0,0,5,8,17,43,47,47,50,57,52,57,49,6,0,0,0,1,0,0,0,0,0,8,17,20,10,22,37,52,53,58,57,46,46,3,0,3,3,4,0,0,2,0,1,15,34,37,17,33,23,30,58,57,50,43,45,2,1,1,1,2,1,2,1,0,0,12,37,35,22,32,33,30,62,44,40,40,44,4,1,1,1,1,1,1,2,1,1,6,37,44,36,32,29,48,47,40,40,42,49,4,1,1,1,1,1,1,2,1,1,6,37,45,38,32,29,50,48,40,40,44,49],
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
