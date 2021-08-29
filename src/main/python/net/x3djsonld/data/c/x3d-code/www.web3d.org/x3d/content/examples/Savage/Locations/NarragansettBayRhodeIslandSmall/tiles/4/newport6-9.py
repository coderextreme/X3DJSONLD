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
    GeoLOD(center=(41.543009662207645,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-18.x3d'],child2Url=['../../tiles/5/newport12-19.x3d'],child3Url=['../../tiles/5/newport13-18.x3d'],child4Url=['../../tiles/5/newport13-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[42,39,38,37,38,40,41,43,44,45,51,54,56,54,52,56,57,54,54,56,58,59,60,59,42,41,39,40,38,39,40,43,44,50,52,51,55,57,55,54,56,54,53,53,55,56,61,63,42,42,40,40,41,41,44,45,43,45,48,50,53,58,57,54,53,55,56,55,55,56,58,59,42,41,42,40,43,43,45,45,44,46,47,51,57,59,51,54,53,53,58,55,56,56,60,62,43,42,41,41,42,41,43,45,50,51,52,51,52,52,54,55,54,56,54,57,56,55,60,60,45,44,47,44,44,44,44,45,50,52,52,52,51,51,59,58,54,52,52,53,54,57,57,58,50,44,42,43,44,44,47,43,48,55,53,54,53,55,52,53,53,52,53,52,52,56,57,56,47,46,47,46,45,45,48,50,49,49,52,54,57,54,54,53,57,54,52,51,53,54,56,58,48,47,46,44,45,46,50,49,51,52,54,52,53,54,57,56,54,54,52,52,54,58,60,59,48,49,48,48,49,49,51,52,52,52,54,53,52,55,56,58,55,55,56,59,54,54,53,53,48,45,46,48,50,52,50,55,57,56,57,54,54,53,53,55,57,58,56,56,53,56,55,55,48,49,46,49,49,52,56,56,57,55,55,57,54,54,57,56,54,54,55,54,59,56,54,54,49,49,49,50,54,58,54,57,56,57,56,55,53,55,57,55,55,55,52,56,57,54,55,55,51,52,50,50,52,54,53,56,57,56,55,57,56,56,53,54,55,54,57,59,59,52,51,52,50,50,50,49,51,50,56,57,56,60,56,58,58,56,50,52,57,56,54,54,57,55,53,54,49,50,50,51,51,52,54,57,56,59,56,56,57,55,50,53,57,56,58,55,55,56,55,54,50,52,52,50,50,52,50,51,55,57,55,57,56,55,56,55,56,57,56,56,56,57,58,57,55,54,51,52,52,53,53,54,54,54,55,55,55,57,59,58,57,57,58,54,50,58,59,58,54,51,50,50,53,59,56,56,51,50,56,56,57,57,59,58,59,58,57,55,48,53,61,60,52,56,57,53,55,56,52,50,51,51,55,57,57,58,58,61,60,58,56,49,48,48,62,64,47,50,56,57,55,57,53,54,53,53,53,54,56,60,65,64,63,60,55,48,48,50,57,57,51,53,57,59,56,50,54,52,53,54,60,60,61,63,63,62,60,60,50,48,53,55,54,56,50,49,57,62,56,51,52,51,54,53,57,59,62,64,62,62,58,55,49,48,48,48,56,56,51,48,54,60,56,52,53,51,53,52,56,59,62,64,62,61,56,55,49,48,48,48,56,56],
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
