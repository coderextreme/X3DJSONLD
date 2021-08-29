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
    GeoLOD(center=(41.55915137776267,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-28.x3d'],child2Url=['../../tiles/5/newport14-29.x3d'],child3Url=['../../tiles/5/newport15-28.x3d'],child4Url=['../../tiles/5/newport15-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[3,2,0,1,2,1,1,3,3,2,2,2,2,0,0,0,0,3,5,7,8,10,11,11,6,4,2,2,2,3,4,6,7,7,7,5,3,1,0,0,0,1,2,3,6,8,9,10,8,7,6,4,4,5,7,9,10,11,11,8,6,3,0,0,0,0,2,2,3,6,8,8,9,10,9,6,5,7,8,11,13,15,14,12,10,6,3,0,0,0,0,0,1,3,5,5,11,10,10,8,6,10,13,13,14,16,16,15,12,8,4,1,1,0,0,0,0,1,1,2,11,9,9,10,10,13,16,16,17,17,18,17,13,9,5,2,1,1,0,0,1,2,2,2,9,8,8,11,13,15,18,18,19,20,20,17,14,10,6,4,2,1,0,0,0,1,1,2,6,6,7,10,14,17,19,21,22,22,21,19,15,11,7,4,3,1,0,0,0,1,1,2,3,4,6,9,14,18,20,22,23,23,20,17,15,12,8,4,2,1,0,1,1,1,1,1,2,1,4,9,14,18,19,19,19,18,15,12,12,11,9,6,3,1,1,1,1,1,1,1,0,1,5,10,15,17,17,15,14,13,13,12,10,9,7,5,3,0,1,1,1,1,0,0,0,1,5,10,14,16,15,13,11,11,11,10,9,9,9,6,2,1,1,1,1,1,1,1,0,1,6,10,13,14,14,12,11,10,10,10,9,11,11,8,2,1,0,1,1,1,1,1,1,1,4,7,11,13,13,12,10,10,10,10,11,12,12,9,5,2,0,1,1,1,1,1,0,0,4,7,11,12,12,11,10,10,10,10,10,11,10,7,5,3,1,1,1,1,1,1,0,0,4,8,11,12,11,11,10,10,10,10,10,10,9,7,4,1,1,1,1,1,1,0,0,0,4,8,12,12,11,10,10,10,10,10,11,10,9,6,3,1,1,1,1,1,1,1,0,0,4,8,11,11,10,9,9,9,10,11,11,11,9,6,3,1,1,1,1,1,1,1,0,0,5,9,10,9,9,9,9,10,10,10,10,9,9,7,4,1,1,1,1,1,1,1,0,0,3,7,8,8,8,9,10,10,10,10,10,10,9,8,5,2,1,1,1,1,1,1,0,0,3,5,6,8,9,10,10,11,11,11,11,11,10,8,5,2,1,1,1,1,1,1,0,0,3,5,6,7,8,10,11,12,12,11,12,12,11,7,5,2,1,1,1,1,1,1,0,0,2,3,5,7,9,11,12,13,13,13,13,13,10,6,4,1,1,1,1,1,1,1,0,0,2,2,5,7,9,11,12,13,13,13,14,12,10,6,4,1,1,1,1,1,1,1],
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
