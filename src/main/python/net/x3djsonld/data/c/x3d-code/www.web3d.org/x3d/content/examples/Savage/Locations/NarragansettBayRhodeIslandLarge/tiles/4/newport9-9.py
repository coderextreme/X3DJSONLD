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
    GeoLOD(center=(41.573110194091946,-71.37349911997524,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-18.x3d'],child2Url=['../../tiles/5/newport18-19.x3d'],child3Url=['../../tiles/5/newport19-18.x3d'],child4Url=['../../tiles/5/newport19-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,9,16,26,37,45,44,32,31,26,17,6,0,0,0,0,0,0,0,0,0,0,0,0,13,17,31,42,45,36,30,24,14,0,0,0,0,0,0,0,0,0,0,0,0,2,12,19,26,39,43,40,28,18,6,0,0,0,0,0,0,0,0,0,0,0,0,7,11,20,28,38,40,38,32,19,15,8,0,0,0,0,0,0,0,0,0,0,0,9,17,21,25,33,35,29,28,24,23,19,13,0,0,0,0,0,0,0,0,0,0,2,18,19,20,24,20,23,25,24,24,26,18,0,0,0,0,0,0,0,0,0,0,0,13,15,18,20,19,23,24,27,28,28,22,3,0,0,0,0,0,0,0,0,0,0,7,15,16,17,20,21,24,28,34,29,22,2,0,0,0,0,0,0,0,0,0,0,6,12,13,14,17,21,24,30,35,31,22,0,0,0,0,0,0,0,0,0,0,0,3,7,10,17,20,21,29,29,30,30,18,0,0,0,0,0,0,0,0,0,0,0,0,0,18,21,20,23,26,23,24,25,13,0,0,0,0,0,0,0,0,0,0,0,0,0,19,23,26,28,29,29,28,16,8,0,0,0,0,0,0,0,0,0,0,0,0,0,12,24,24,29,29,26,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,22,26,25,24,21,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,18,24,23,22,22,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,16,14,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
