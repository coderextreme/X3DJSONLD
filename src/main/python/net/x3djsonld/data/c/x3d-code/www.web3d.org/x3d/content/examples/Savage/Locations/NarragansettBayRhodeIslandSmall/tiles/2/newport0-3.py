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
    GeoLOD(center=(41.47037194221004,-71.20887957792968,0.0),range=8600.306,child1Url=['../../tiles/3/newport0-6.x3d'],child2Url=['../../tiles/3/newport0-7.x3d'],child3Url=['../../tiles/3/newport1-6.x3d'],child4Url=['../../tiles/3/newport1-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0030746125,zDimension=23,zSpacing=0.0029348573,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,3,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,1,6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,5,9,8,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,7,7,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,3,4,5,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,5,9,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,8,5,15,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,12,11,17,14,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,14,14,20,13,13,10,0,0,0,0,0,0,0,0,0,0,0,0,4,4,9,11,18,16,22,18,16,12,11,0,0,0,0,0,0,0,0,0,0,0,8,12,13,15,16,17,19,22,15,17,11,0,0,0,0,0,0,0,0,0,0,0,8,12,13,15,16,17,19,22,15,17],
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
