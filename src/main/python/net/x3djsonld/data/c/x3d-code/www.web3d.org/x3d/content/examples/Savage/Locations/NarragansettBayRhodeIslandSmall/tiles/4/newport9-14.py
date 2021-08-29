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
    GeoLOD(center=(41.59143480887271,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-28.x3d'],child2Url=['../../tiles/5/newport18-29.x3d'],child3Url=['../../tiles/5/newport19-28.x3d'],child4Url=['../../tiles/5/newport19-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,0,1,2,4,10,11,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,0,2,6,12,13,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,2,6,14,15,0,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,0,1,2,7,21,23,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,3,13,22,23,1,2,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,1,6,13,18,18,0,0,0,1,1,1,1,1,1,1,1,1,0,1,2,2,2,2,1,2,6,12,16,17,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,7,13,18,19,2,2,3,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,9,16,20,21,3,1,2,3,3,2,3,1,1,1,1,1,1,1,1,1,1,1,1,2,8,14,24,26,3,1,2,3,4,3,2,1,1,1,1,1,1,1,1,1,1,1,1,3,9,15,20,21,0,1,3,4,4,3,2,1,1,1,1,1,1,1,1,1,1,1,1,4,10,16,21,21,0,0,1,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1,1,4,9,16,22,21,0,0,1,2,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,5,10,15,18,19,0,0,1,1,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,4,9,14,17,18,0,0,0,1,2,3,3,3,1,2,2,2,1,1,1,1,1,1,1,5,10,14,17,18,0,0,0,0,1,1,2,1,1,1,1,2,2,2,1,1,1,1,1,4,9,14,16,18,0,0,0,0,0,1,2,1,1,1,1,1,1,1,1,1,1,1,3,7,11,14,17,18,0,0,0,0,0,0,0,1,1,0,0,0,2,1,2,1,1,1,6,13,14,14,16,16,0,0,1,2,2,2,1,0,1,0,0,0,0,0,0,2,3,6,9,9,9,11,14,14,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,4,7,6,4,6,9,11,11,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,2,2,3,2,2,4,8,9,10,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,2,1,5,5,4,5,7,8,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,2,3,6,5,5,5,7,7],
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
