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
    GeoLOD(center=(41.55915137776267,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-18.x3d'],child2Url=['../../tiles/5/newport14-19.x3d'],child3Url=['../../tiles/5/newport15-18.x3d'],child4Url=['../../tiles/5/newport15-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[51,48,54,60,56,52,53,51,53,52,56,59,62,64,62,61,56,55,49,48,48,48,56,56,52,52,53,52,51,53,52,51,51,52,54,58,61,62,62,58,53,55,48,48,48,48,53,55,48,50,48,52,53,49,49,52,52,53,53,57,59,60,60,57,54,51,48,48,48,48,51,53,44,45,46,47,45,47,51,50,52,54,55,57,59,59,60,57,53,48,48,48,48,48,49,51,39,39,38,42,45,46,50,52,51,56,56,58,59,58,55,48,49,48,48,48,48,48,50,53,36,37,39,42,43,46,44,48,50,55,57,60,62,57,54,55,49,48,48,48,48,48,49,52,34,36,39,39,42,45,49,53,55,58,57,58,58,58,55,59,49,48,48,48,48,48,49,50,31,34,41,42,47,48,51,54,54,56,58,61,61,59,52,56,48,48,48,48,48,48,48,48,35,36,39,42,44,46,51,57,62,62,58,61,61,60,58,57,50,48,48,48,48,48,50,51,35,38,42,46,47,45,50,58,64,62,60,59,66,63,59,56,56,50,49,48,48,51,58,58,41,44,45,50,50,54,52,57,57,55,59,59,56,58,62,58,52,53,56,53,51,57,59,58,34,40,43,47,51,55,55,57,58,58,60,58,52,60,60,53,52,53,54,54,57,61,58,59,34,40,43,48,50,52,53,58,55,54,57,60,60,59,53,52,55,59,58,58,59,59,61,62,31,39,42,48,49,52,55,54,55,56,56,58,58,53,49,50,53,55,58,58,59,61,61,62,29,38,42,46,50,51,51,52,54,52,53,53,53,51,49,48,52,55,58,61,60,58,61,61,34,40,42,47,49,49,47,49,49,49,49,48,47,46,42,46,51,54,57,60,61,56,58,58,33,35,40,43,45,49,49,50,51,51,47,46,42,34,37,44,46,50,54,58,59,61,59,59,33,39,41,43,45,45,46,51,53,50,45,43,35,32,40,40,42,44,50,52,53,56,53,54,31,37,41,42,42,43,45,50,56,54,46,40,32,32,33,34,40,41,42,47,51,52,53,53,28,33,39,41,40,44,48,50,56,52,45,40,32,32,32,32,32,36,40,42,43,46,49,49,27,31,34,39,40,39,44,52,56,58,47,42,32,32,32,32,32,32,32,36,41,42,45,45,28,32,36,38,41,41,45,50,52,50,48,35,32,32,32,32,32,32,32,32,33,39,41,42,23,28,33,39,44,43,46,47,50,48,43,40,35,34,32,32,32,32,32,32,32,32,38,38,23,27,32,38,45,44,47,46,49,49,42,38,34,36,32,32,32,32,32,32,32,32,37,38],
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
