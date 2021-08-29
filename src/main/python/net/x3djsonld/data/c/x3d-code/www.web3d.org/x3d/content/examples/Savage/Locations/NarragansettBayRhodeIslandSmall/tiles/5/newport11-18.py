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
        texture=ImageTexture(url=['../../images/5/newport11-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[28,32,36,38,39,40,41,45,49,48,47,48,50,52,53,54,54,52,52,52,53,51,50,29,32,34,37,40,40,41,42,44,45,46,48,52,53,53,53,54,53,54,53,53,52,51,30,33,35,37,39,40,41,42,43,45,48,49,50,52,53,52,52,54,53,52,51,52,52,32,34,35,37,40,41,41,41,42,45,48,49,50,50,51,51,51,52,52,51,51,51,52,35,36,34,36,39,41,42,41,41,44,46,48,49,49,50,51,50,51,50,52,51,50,51,36,35,34,36,38,40,43,42,42,44,46,48,48,49,50,51,51,51,51,51,51,52,53,35,35,37,38,39,41,42,43,43,44,47,48,48,48,50,51,51,51,51,51,51,52,51,34,36,38,40,41,42,42,44,45,45,46,47,48,48,49,49,49,49,49,49,50,50,50,34,36,38,40,40,40,43,46,46,46,45,45,47,49,49,48,49,49,49,49,50,51,50,34,36,36,39,40,40,41,43,44,47,46,46,47,49,50,49,48,49,49,49,49,48,46,33,35,35,37,37,38,40,41,43,45,46,48,48,49,49,48,48,48,49,50,48,46,45,32,35,37,35,35,36,40,41,43,44,45,45,46,48,48,49,48,48,48,47,47,47,47,35,36,39,37,37,38,42,41,41,44,45,44,45,46,47,45,45,45,47,47,48,48,47,37,37,40,39,39,40,42,42,42,44,45,44,45,46,45,44,43,44,46,46,47,47,45,38,37,37,37,38,41,40,43,44,43,44,44,45,47,46,45,44,45,44,45,45,46,45,36,37,37,39,40,40,41,42,42,43,42,44,43,45,44,44,44,44,45,44,44,45,45,37,37,37,38,39,39,40,41,41,42,43,44,43,43,44,43,43,45,45,44,44,45,46,38,37,37,38,39,40,39,41,41,40,42,44,44,41,44,44,45,45,46,45,45,45,46,39,38,38,40,41,41,40,41,41,39,39,41,41,41,42,43,44,43,44,45,44,45,46,38,39,40,40,40,39,39,39,38,38,38,40,41,41,41,43,44,43,45,45,45,45,45,38,40,40,40,39,38,37,39,39,37,38,40,41,42,42,43,43,43,44,44,45,46,45,39,40,40,39,38,38,38,39,39,39,40,39,39,37,38,40,43,44,44,44,45,46,46,39,40,40,39,38,38,38,39,39,40,39,39,38,36,36,38,42,43,43,45,45,46,47],
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
