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
    GeoLOD(center=(41.573110194091946,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-14.x3d'],child2Url=['../../tiles/5/newport18-15.x3d'],child3Url=['../../tiles/5/newport19-14.x3d'],child4Url=['../../tiles/5/newport19-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[35,32,28,27,23,11,20,18,10,15,24,39,44,50,26,21,22,14,8,9,11,14,24,27,24,29,21,11,21,14,19,19,24,32,36,33,29,21,14,11,8,13,18,16,27,30,20,22,17,20,13,16,18,20,22,25,21,23,19,19,15,12,14,9,14,11,44,32,24,23,26,24,27,23,23,22,28,25,28,26,25,25,28,20,19,14,11,12,43,38,28,26,26,28,26,27,29,30,30,28,31,30,27,29,25,18,14,15,11,16,30,23,23,23,26,25,22,23,24,27,31,30,28,24,22,28,20,17,13,12,17,15,18,18,17,22,24,21,17,25,25,25,26,23,21,27,23,23,18,13,12,8,10,11,18,15,17,22,19,21,20,21,24,24,24,19,14,20,16,18,13,13,12,11,12,11,19,20,14,14,14,15,17,16,20,23,20,14,17,12,15,12,11,14,13,14,10,9,21,16,15,14,14,18,14,17,16,16,13,15,14,13,14,11,16,11,8,9,10,9,24,14,14,14,17,14,17,20,18,16,17,19,16,12,13,21,21,16,9,9,7,11,23,14,14,18,14,21,22,18,16,11,16,8,10,4,14,21,21,19,15,10,12,10,15,14,14,21,22,24,21,21,20,18,13,8,1,4,9,14,13,8,11,9,0,0,14,14,14,28,27,22,23,28,26,24,21,18,10,5,1,1,9,8,4,0,0,0,16,14,25,28,27,25,27,26,29,27,26,23,14,8,5,11,1,0,1,5,1,0,19,20,23,28,27,25,21,24,30,31,21,16,4,4,2,7,5,2,0,6,3,0,27,27,26,25,30,30,26,28,36,33,27,15,9,7,6,5,9,5,0,0,0,0,26,28,22,28,31,22,25,36,32,35,34,20,11,7,8,7,2,8,0,0,0,0,23,23,25,28,18,21,24,33,39,44,32,23,12,0,0,0,0,4,4,0,0,0,25,27,33,26,23,21,21,25,28,30,32,17,7,0,5,0,6,0,0,0,0,0,31,29,32,30,27,23,24,27,23,21,18,13,9,9,5,0,0,10,7,0,0,0,30,29,32,28,26,22,24,26,24,20,18,13,9,9,6,0,0,10,9,0,0,0],
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
