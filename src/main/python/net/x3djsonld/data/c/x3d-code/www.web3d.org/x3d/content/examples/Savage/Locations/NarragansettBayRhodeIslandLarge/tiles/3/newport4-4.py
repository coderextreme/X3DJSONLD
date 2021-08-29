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
    GeoLOD(center=(41.54892011792395,-71.39548447401864,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-8.x3d'],child2Url=['../../tiles/4/newport8-9.x3d'],child3Url=['../../tiles/4/newport9-8.x3d'],child4Url=['../../tiles/4/newport9-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[26,22,6,16,14,0,0,0,0,0,0,4,2,0,12,26,25,18,0,0,0,0,25,29,22,33,18,0,0,0,0,0,0,0,0,0,4,12,18,0,0,0,0,0,27,35,33,26,13,0,1,0,0,0,0,0,0,8,21,17,15,1,0,0,0,0,27,44,38,36,24,0,0,0,0,22,0,0,0,0,16,13,20,12,6,0,0,0,36,51,48,39,33,5,0,0,0,0,0,0,0,0,10,6,2,12,20,0,0,0,27,46,45,39,38,13,0,0,0,0,0,0,0,9,11,13,3,1,0,0,0,0,24,32,43,51,56,30,0,0,0,0,0,0,24,36,18,24,16,3,0,0,0,0,28,48,51,63,63,31,0,0,0,0,0,8,27,42,27,16,21,13,0,0,0,0,29,43,42,59,51,24,0,0,0,0,0,0,24,31,33,13,19,29,6,0,0,0,13,28,47,52,38,5,0,0,0,0,0,0,18,32,39,23,13,30,0,0,0,0,11,18,41,27,13,0,0,0,0,0,0,0,5,21,41,39,27,21,0,0,0,0,16,16,19,7,0,0,0,0,0,0,0,0,0,11,29,43,28,7,0,0,0,0,16,11,0,6,0,0,0,0,0,0,0,0,0,17,26,38,30,22,5,0,0,0,11,6,0,0,0,0,0,0,0,0,0,0,0,13,20,21,23,28,19,0,0,0,10,3,8,0,0,0,0,0,0,0,0,0,0,8,13,14,26,35,21,0,0,0,8,2,0,0,0,0,0,0,0,0,0,0,0,1,15,20,22,26,15,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,19,25,28,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,25,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
