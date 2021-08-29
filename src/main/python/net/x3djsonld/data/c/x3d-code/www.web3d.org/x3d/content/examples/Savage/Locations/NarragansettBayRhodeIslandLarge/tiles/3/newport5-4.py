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
    GeoLOD(center=(41.64568042259594,-71.39548447401864,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-8.x3d'],child2Url=['../../tiles/4/newport10-9.x3d'],child3Url=['../../tiles/4/newport11-8.x3d'],child4Url=['../../tiles/4/newport11-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[1,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,12,6,5,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,11,13,10,11,12,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,8,5,11,12,9,8,3,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,12,14,16,26,12,12,9,7,8,0,0,0,0,0,0,0,0,5,0,0,0,0,9,11,11,11,9,4,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,14,14,10,4,14,11,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,14,13,13,17,21,11,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,13,29,16,13,11,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,25,20,11,9,11,1,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,23,32,13,9,15,10,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,23,16,16,13,13,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,33,19,15,15,12,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,6,16,29,19,13,18,10,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,12,5,13,13,5,16,18,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,2,17,10,4,0,8,10,0,0,0,0,0,0,0,0,0,0,0,0,12,4,0,0,22,19,14,10,13,4,3,3,0,0,0,0,0,0,0,0,0,0,16,13,0,0,16,23,12,15,12,9,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,13,16,11,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,26,13,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,28,31,16,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,28,30,17,2,0,0,0,0,0],
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
