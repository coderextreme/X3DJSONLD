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
    GeoLOD(center=(41.47037194221004,-71.27344644014977,0.0),range=8600.306,child1Url=['../../tiles/3/newport0-4.x3d'],child2Url=['../../tiles/3/newport0-5.x3d'],child3Url=['../../tiles/3/newport1-4.x3d'],child4Url=['../../tiles/3/newport1-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,11,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,12,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,22,17,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,11,20,20,20,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,2,6,6,17,22,20,0,0,0,0,0,0,5,20,12,0,0,0,0,0,0,0,2,1,2,2,24,26,14,0,0,0,0,0,2,12,24,21,10,0,0,0,0,3,2,1,0,0,0,26,24,8,0,0,0,0,2,11,17,34,30,13,2,0,0,0,0,0,0,0,0,0,16,13,2,0,0,0,0,4,16,27,39,34,13,4,0,16,0,0,5,3,0,0,0,17,11,7,6,5,0,0,10,22,26,41,36,15,13,9,2,12,7,16,14,6,0,0,22,16,17,20,13,2,7,23,29,35,40,34,20,23,33,23,11,17,26,24,30,0,0,27,29,28,33,22,3,11,27,42,48,43,33,24,26,41,37,17,16,23,29,32,12,11,27,30,29,34,22,3,10,29,42,49,43,33,24,27,43,38,18,17,23,29,32,12,11],
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
