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
    GeoLOD(center=(41.68828510220285,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-18.x3d'],child2Url=['../../tiles/5/newport30-19.x3d'],child3Url=['../../tiles/5/newport31-18.x3d'],child4Url=['../../tiles/5/newport31-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[8,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,9,10,6,6,6,2,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,7,6,3,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,3,4,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,1,1,0,2,2,5,4,1,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,4,4,4,3,2,2,9,7,2,0,0,0,0,0,0,0,0,0,0,4,6,3,6,8,7,8,5,4,1,1,7,7,8,7,4,0,0,0,0,0,0,0,4,8,3,4,9,11,12,8,5,2,3,2,9,6,7,7,8,0,0,0,0,0,1,4,8,7,4,9,11,11,12,8,6,4,2,2,10,13,12,9,9,6,2,0,0,0,3,9,11,4,8,12,14,13,12,10,8,3,2,1,10,10,12,11,9,8,5,1,2,1,3,8,4,5,14,17,15,13,11,9,5,3,1,1,7,10,9,10,6,2,4,6,2,3,7,3,5,13,17,15,15,13,10,12,7,6,1,1,10,8,9,11,7,6,3,4,5,5,3,3,8,15,18,20,18,14,11,8,5,5,4,4,8,8,6,8,6,7,6,8,7,5,3,5,11,16,17,19,18,16,12,8,9,8,7,6,5,5,8,9,8,9,7,6,5,8,9,11,17,19,20,19,17,15,12,9,10,8,9,10,8,9,7,7,8,8,7,6,8,10,14,17,21,23,21,20,18,17,14,11,9,9,8,8,9,9,8,6,7,6,8,8,12,16,20,23,24,23,21,20,20,18,15,13,11,11,11,11,8,7,9,8,9,12,13,16,16,19,21,24,24,24,24,22,20,20,17,14,13,14,13,12,7,9,8,9,12,13,15,18,21,20,23,26,25,24,26,23,21,18,16,16,16,15,16,16,8,12,9,12,13,16,18,19,22,25,27,28,28,26,24,22,21,19,18,20,18,17,17,17,8,9,11,15,17,18,20,22,23,25,27,29,30,29,27,24,21,19,18,17,17,19,17,17,9,11,15,18,19,21,23,25,24,27,30,29,29,26,27,25,24,18,17,18,20,23,23,22,9,13,16,18,19,23,24,25,24,27,30,30,30,27,28,25,24,18,18,20,20,23,23,22],
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
