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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport12-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[30,31,33,35,36,34,34,33,35,34,35,36,39,41,43,45,45,45,44,43,41,39,39,30,32,34,35,36,38,38,36,36,37,37,40,42,44,46,47,46,45,44,44,43,40,40,31,33,35,37,39,45,45,41,37,36,35,38,41,43,44,45,46,44,44,45,44,43,42,33,36,39,41,44,50,49,44,39,37,36,38,40,39,38,40,44,44,44,45,45,45,45,34,37,39,41,43,46,46,43,40,42,43,45,44,39,36,37,41,44,44,46,47,47,46,34,35,39,40,41,42,43,44,43,43,45,46,44,42,41,43,46,47,47,48,47,46,45,34,36,41,40,38,39,41,44,45,44,44,44,46,47,47,48,48,48,48,48,47,47,47,34,35,39,40,39,41,45,46,48,50,48,46,47,49,49,48,48,50,49,48,48,48,48,35,37,39,41,42,43,47,49,49,49,48,47,47,49,50,51,51,50,49,47,47,47,46,36,38,40,42,43,45,49,50,51,49,48,46,46,48,49,50,50,49,48,48,48,47,46,36,38,39,39,42,45,48,50,51,48,48,47,47,49,50,51,51,50,48,48,49,48,46,35,37,39,39,43,46,50,50,49,48,49,52,52,53,53,53,51,52,52,53,54,51,48,34,37,39,41,43,46,51,52,51,49,51,53,53,53,54,54,53,53,54,54,52,51,48,36,37,38,40,43,46,51,53,51,50,50,51,51,52,55,55,55,54,52,49,49,50,48,36,38,39,40,43,46,48,50,49,47,48,51,53,54,53,51,51,52,51,50,51,51,49,36,39,39,41,43,45,47,50,49,48,48,49,50,51,52,52,52,51,52,53,52,51,50,35,37,39,42,44,46,48,50,50,49,49,50,49,50,54,56,56,55,54,55,52,51,50,35,37,41,44,45,45,46,49,50,50,52,53,51,50,52,54,54,53,54,56,54,50,49,36,38,41,43,44,44,46,49,51,51,53,52,51,51,51,50,50,51,52,54,55,50,50,37,39,41,43,45,43,44,50,53,53,53,52,52,51,50,49,50,51,51,51,52,51,52,37,40,43,44,45,45,45,50,52,52,52,53,53,53,53,52,54,55,54,50,50,52,51,39,41,43,44,47,47,48,50,51,51,52,52,51,51,52,52,53,54,53,51,51,54,52,39,41,43,44,47,48,49,51,51,51,52,52,51,51,50,52,53,53,52,51,52,54,52],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
