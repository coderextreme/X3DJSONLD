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
    GeoLOD(center=(41.86339110810791,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-26.x3d'],child2Url=['../../tiles/5/newport30-27.x3d'],child3Url=['../../tiles/5/newport31-26.x3d'],child4Url=['../../tiles/5/newport31-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[34,29,27,25,23,22,22,29,29,30,33,35,38,46,46,41,38,33,32,28,25,25,36,32,28,25,26,29,27,27,28,31,34,36,41,46,43,40,35,34,32,26,25,27,31,31,31,26,30,30,27,28,29,34,35,39,45,47,43,42,39,37,32,26,25,25,29,29,29,29,31,31,30,28,36,36,35,43,46,47,46,44,41,39,33,28,27,27,29,29,29,29,31,34,31,33,42,44,40,41,43,44,45,45,43,41,33,26,26,25,29,29,29,29,29,30,31,37,46,47,46,44,43,43,43,43,42,39,35,28,25,25,29,31,30,30,31,30,32,36,46,52,50,46,45,44,45,46,41,36,31,31,27,25,27,28,28,32,32,31,31,37,50,57,52,46,45,43,43,45,41,38,34,33,30,29,26,29,30,32,30,31,31,34,52,60,53,49,47,46,47,46,43,38,36,35,31,32,29,32,33,34,31,31,32,34,45,58,50,49,48,47,46,47,45,42,42,37,37,39,33,34,35,34,33,31,32,31,41,51,50,49,49,45,45,43,41,42,45,40,42,40,32,33,36,31,31,34,32,33,40,48,51,48,53,48,40,39,39,40,41,39,35,34,31,31,33,31,31,31,31,31,31,43,47,47,49,41,37,34,39,37,38,36,33,32,31,33,35,33,35,31,31,31,31,42,44,45,46,38,36,34,33,32,32,32,32,32,34,34,32,35,38,31,31,31,32,42,43,44,45,41,36,36,33,34,32,33,32,31,35,33,31,34,33,31,31,31,37,40,42,43,43,43,42,39,35,37,35,36,39,37,33,31,31,31,31,31,31,33,31,39,41,42,44,42,38,39,39,37,43,47,47,43,32,31,31,31,31,31,31,31,31,38,37,38,41,45,40,37,37,42,41,51,49,46,34,31,35,31,31,31,31,31,31,35,37,38,40,42,42,39,37,38,41,46,48,46,34,31,32,31,31,31,32,31,33,37,37,38,42,41,39,37,36,35,39,39,39,39,39,36,34,31,31,31,44,32,38,42,37,42,45,41,37,35,34,34,34,35,32,32,39,37,35,31,31,31,45,32,38,42,37,42,45,41,36,35,34,34,34,34,32,32],
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
