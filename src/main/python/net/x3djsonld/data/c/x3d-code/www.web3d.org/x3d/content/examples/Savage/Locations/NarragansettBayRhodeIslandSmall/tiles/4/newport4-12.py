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
    GeoLOD(center=(41.5107262310976,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-24.x3d'],child2Url=['../../tiles/5/newport8-25.x3d'],child3Url=['../../tiles/5/newport9-24.x3d'],child4Url=['../../tiles/5/newport9-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[21,17,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,15,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,13,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,11,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,10,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,7,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,6,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,8,8,7,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,10,11,11,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,12,14,15,14,12,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,16,19,19,17,14,11,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,17,20,23,22,20,16,12,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,19,23,27,25,21,17,14,12,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,22,27,30,27,22,18,15,13,10,7,2,0,0,0,0,0,0,0,0,0,0,0,0,25,30,31,28,23,19,16,15,13,12,7,1,0,0,0,0,0,0,0,0,0,0,0,27,30,30,28,24,21,18,17,16,14,10,5,0,0,0,0,0,0,0,0,0,0,0,28,30,30,28,24,22,20,19,17,16,13,9,5,2,0,0,0,0,0,0,0,0,0,28,30,30,28,26,24,21,20,19,17,15,12,8,3,0,0,0,0,0,0,0,0,0,26,28,27,27,27,25,23,21,20,19,17,14,10,5,0,0,0,0,0,0,0,0,0,24,24,23,24,25,25,24,23,22,21,20,17,14,9,1,0,0,0,0,0,0,0,0,23,23,23,24,25,25,25,24,22,21,20,18,15,10,4,0,0,0,0,0,0,0,0],
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
