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
    GeoLOD(center=(41.47634988941996,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-26.x3d'],child2Url=['../../tiles/5/newport14-27.x3d'],child3Url=['../../tiles/5/newport15-26.x3d'],child4Url=['../../tiles/5/newport15-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,5,0,0,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,4,2,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,1,2,1,2,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,2,2,2,8,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,3,5,9,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,6,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,7,6,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,2,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,4,4,5,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,4,5,8,8,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,6,5,9,15,9,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,6,4,9,15,9,4,4],
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
