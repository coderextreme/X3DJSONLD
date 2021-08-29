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
    GeoLOD(center=(41.5107262310976,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-28.x3d'],child2Url=['../../tiles/5/newport8-29.x3d'],child3Url=['../../tiles/5/newport9-28.x3d'],child4Url=['../../tiles/5/newport9-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[0,0,0,0,0,0,0,1,5,7,8,8,8,9,11,12,12,12,12,12,11,12,14,14,0,0,0,0,0,0,0,0,5,7,8,8,9,11,13,14,14,13,13,12,12,13,15,15,0,0,0,0,0,0,0,0,4,8,10,10,11,13,14,15,15,14,14,13,14,14,15,15,0,0,0,0,0,0,0,0,3,8,10,11,12,13,15,16,16,15,14,14,14,15,16,16,0,0,0,0,0,0,0,0,2,6,9,11,12,13,15,17,18,16,14,14,15,16,17,17,0,0,0,0,0,0,0,0,0,5,7,9,12,13,16,18,17,16,15,15,15,16,17,17,0,0,0,0,0,0,0,0,0,2,6,8,10,14,17,18,16,15,15,16,16,17,18,18,0,0,0,0,0,0,0,0,0,0,2,5,10,13,15,16,15,15,15,16,17,17,19,19,0,0,0,0,0,0,0,0,0,0,0,4,8,11,14,14,13,14,15,17,18,19,19,20,0,0,0,0,0,0,0,0,0,0,0,2,6,9,10,11,13,14,15,17,19,21,22,22,0,0,0,0,0,0,0,0,0,0,0,0,4,6,9,11,13,14,16,18,21,24,25,25,0,0,0,0,0,0,0,0,0,0,0,0,3,6,9,11,13,15,17,20,24,26,27,27,0,0,0,0,0,0,0,0,0,0,0,0,3,7,9,10,12,14,17,21,25,27,28,28,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,9,11,13,18,22,25,27,28,29,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,7,9,13,17,21,25,27,29,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,9,13,18,22,25,28,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,13,17,22,25,28,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,12,17,21,25,28,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,10,16,21,25,28,30,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,10,15,20,25,29,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,4,8,14,20,25,29,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,8,15,21,25,29,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,8,15,21,25,29,31,31],
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
