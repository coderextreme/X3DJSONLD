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
    GeoLOD(center=(41.62371823998276,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-20.x3d'],child2Url=['../../tiles/5/newport22-21.x3d'],child3Url=['../../tiles/5/newport23-20.x3d'],child4Url=['../../tiles/5/newport23-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,5,4,7,12,9,10,12,12,11,13,17,22,18,21,28,34,37,41,44,43,0,0,0,0,0,5,7,10,12,10,13,15,14,13,14,12,14,21,27,29,31,35,39,41,0,0,0,0,1,6,11,11,15,13,12,11,9,12,14,12,13,13,19,23,29,29,34,35,0,0,0,0,1,8,10,17,22,22,14,9,12,12,9,10,13,12,14,19,25,31,34,35,0,0,0,0,2,4,8,14,17,20,16,11,9,7,7,9,12,11,14,19,20,26,31,31,0,0,0,5,6,9,11,13,17,15,11,8,9,8,9,10,7,12,13,18,21,24,30,31,0,0,5,7,9,11,14,11,13,13,15,12,11,5,6,7,6,14,11,17,25,26,26,27,0,0,4,6,8,10,12,13,15,16,16,14,8,6,5,3,5,8,15,16,21,28,28,28,0,0,3,5,6,9,12,16,16,18,17,16,11,10,4,0,3,5,9,20,19,24,29,31,0,4,5,7,10,8,11,15,18,16,14,15,11,8,8,4,4,6,10,15,24,26,28,27,0,0,2,5,7,10,12,17,18,16,15,14,13,10,6,6,7,5,12,14,15,19,25,27,0,2,0,3,7,12,20,21,18,17,14,8,6,8,2,4,10,9,7,9,13,20,25,27,0,0,0,1,7,13,22,19,14,15,13,13,9,4,2,3,5,5,4,3,8,16,23,24,0,0,0,5,7,11,15,13,12,9,12,8,6,5,1,1,3,6,3,8,13,13,20,22,0,0,0,1,7,9,9,11,11,6,10,6,5,2,1,1,1,3,3,4,7,15,18,19,0,0,0,0,4,6,7,6,7,8,5,4,2,2,2,1,0,0,3,3,8,13,18,20,0,0,0,0,0,2,2,3,4,5,3,2,1,2,1,1,5,6,0,2,7,12,16,17,0,0,0,0,0,0,0,0,0,0,0,1,2,1,1,5,10,11,0,2,5,8,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,9,10,7,6,6,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,9,7,6,7,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,6,2,4,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,4,5],
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
