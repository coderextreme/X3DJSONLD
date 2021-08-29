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
        texture=ImageTexture(url=['../../images/5/newport11-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[47,49,48,48,49,47,47,50,53,52,52,53,53,54,54,55,56,57,56,57,60,62,63,44,48,48,47,48,50,53,54,51,51,52,54,52,52,52,53,56,56,56,58,61,63,63,46,48,50,50,48,46,48,48,48,48,49,49,49,49,51,54,57,59,59,59,61,62,62,48,50,51,49,47,44,45,46,46,48,48,47,47,47,48,50,53,56,58,58,59,60,60,47,47,48,46,46,45,46,47,47,48,47,49,48,47,47,47,49,52,55,56,56,58,59,47,47,45,44,46,46,45,46,46,46,48,48,49,48,49,48,49,52,55,57,57,58,58,47,47,45,45,46,46,45,47,46,46,46,46,48,47,47,47,48,51,55,57,57,56,57,45,45,44,43,42,41,43,43,42,43,43,45,48,48,46,47,49,51,54,56,56,56,57,43,42,42,42,41,39,41,42,41,42,42,43,44,44,44,46,51,51,53,56,57,58,59,40,38,39,40,40,39,40,41,41,40,41,43,44,46,46,48,52,52,55,59,58,59,58,38,38,39,42,42,41,42,43,45,43,43,43,43,46,47,48,52,52,56,60,59,59,58,40,40,42,43,43,45,44,44,45,45,46,44,43,45,46,47,49,50,53,56,59,60,59,41,42,41,41,41,44,44,44,43,44,46,45,45,45,47,49,48,48,51,54,56,56,56,42,43,41,39,40,43,44,43,41,40,43,44,45,45,48,49,48,49,51,53,55,54,54,39,40,39,39,41,42,40,41,42,40,40,42,45,47,51,53,52,50,52,52,56,54,53,38,38,39,39,41,40,38,39,42,44,44,46,46,49,52,53,51,51,52,51,53,50,50,37,38,39,38,38,38,38,39,43,47,47,48,48,48,50,51,50,52,53,51,49,49,50,35,36,36,36,38,39,41,42,45,48,48,47,49,51,51,50,49,49,52,51,50,51,51,30,33,35,38,40,42,44,43,45,48,50,49,51,53,53,52,51,51,52,49,47,52,53,29,32,35,39,39,40,42,42,44,46,49,50,52,53,52,52,53,53,52,50,50,53,54,29,31,33,36,37,39,42,44,44,45,47,48,49,49,50,52,52,51,51,52,55,53,53,28,28,32,35,37,40,42,43,45,46,47,48,49,49,51,53,51,48,49,52,53,52,52,27,28,32,35,38,41,42,42,44,45,46,47,48,50,51,53,50,48,50,53,52,51,52],
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
