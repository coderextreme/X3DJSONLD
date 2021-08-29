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
    GeoLOD(center=(41.478442799987555,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-14.x3d'],child2Url=['../../tiles/5/newport4-15.x3d'],child3Url=['../../tiles/5/newport5-14.x3d'],child4Url=['../../tiles/5/newport5-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[21,18,15,10,10,9,8,8,7,6,6,7,10,15,12,8,4,3,8,12,12,12,12,12,18,17,15,10,8,7,6,5,5,5,6,7,9,13,14,11,4,4,9,12,13,14,14,14,16,16,16,12,8,7,6,4,3,3,4,6,7,9,13,12,4,5,11,14,15,15,15,16,17,16,17,17,12,8,6,4,2,2,2,2,4,6,9,11,6,7,12,15,15,15,16,16,21,21,21,20,14,7,3,2,1,1,2,2,4,4,5,5,7,10,15,16,16,16,16,17,22,24,24,21,15,7,3,1,0,0,0,1,3,3,3,3,7,12,15,16,16,15,15,15,18,23,21,19,14,8,3,0,0,0,0,0,3,2,2,3,8,14,15,15,14,14,14,15,12,16,17,14,9,4,3,1,0,0,2,2,3,3,2,4,11,14,15,15,15,15,17,17,6,7,10,8,3,2,2,0,0,0,1,2,3,3,3,6,12,14,15,16,17,17,18,18,0,1,4,0,0,0,0,0,0,0,0,0,2,2,4,7,11,14,15,18,18,18,18,17,0,0,0,0,0,0,0,0,0,0,0,2,3,5,7,8,12,13,15,16,17,18,19,20,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,10,12,13,16,17,18,18,18,19,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,11,13,13,16,17,18,18,18,19,0,0,0,0,0,0,0,0,0,0,1,2,2,5,9,13,15,16,18,18,18,18,20,20,0,0,0,0,0,0,0,0,0,0,0,0,2,5,9,13,17,18,18,18,19,20,20,20,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,12,17,19,19,20,20,20,20,20,0,0,0,0,0,0,0,0,0,0,0,1,4,8,10,14,18,20,21,22,22,21,21,21,0,0,0,0,0,0,0,0,0,0,0,2,4,8,10,13,17,20,21,21,22,20,20,20,0,0,0,0,0,0,0,0,0,0,0,2,4,6,8,12,17,20,22,22,23,21,20,20,0,0,0,0,0,0,0,0,0,0,0,2,3,6,8,11,17,21,24,25,25,23,21,21,0,0,0,0,0,0,0,0,0,0,0,0,3,6,9,12,18,22,24,25,25,23,20,20,0,0,0,0,0,0,0,0,0,0,1,2,4,7,11,15,19,22,24,25,25,23,21,20,0,0,0,0,0,0,0,0,0,0,2,3,7,9,13,17,20,21,23,26,25,24,23,22,0,0,0,0,0,0,0,0,0,0,1,3,7,10,14,17,20,21,23,26,25,24,23,23],
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
