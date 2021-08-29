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
        texture=ImageTexture(url=['../../images/5/newport11-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[50,49,47,48,50,53,55,54,52,51,52,53,54,55,57,58,59,58,60,64,66,66,66,51,51,50,49,49,50,51,50,50,51,53,53,55,55,57,60,62,62,62,61,61,60,60,52,51,50,48,47,47,47,48,49,51,52,53,54,55,56,58,60,64,63,60,59,60,62,52,51,50,48,48,48,48,48,49,50,51,54,53,54,56,58,59,60,61,61,61,61,61,51,53,51,49,49,50,49,47,48,49,50,52,52,54,57,58,57,56,59,59,59,59,58,53,52,50,48,49,49,47,46,48,48,50,51,53,55,56,56,57,56,59,59,57,56,57,51,50,48,48,47,48,47,46,49,49,50,52,54,54,57,56,57,57,58,58,55,55,56,50,49,48,46,45,46,48,48,49,50,50,52,53,53,55,57,58,57,57,58,55,55,56,50,47,47,45,45,45,47,51,51,50,50,51,52,52,52,55,55,55,56,58,57,57,56,46,45,47,46,45,45,45,48,48,50,50,50,50,51,53,55,55,53,53,55,58,58,55,45,45,45,47,47,46,45,46,48,50,51,50,50,51,52,53,53,52,52,54,55,55,54,47,46,45,47,47,47,48,48,50,50,48,49,50,51,49,50,52,53,54,54,52,53,55,47,48,48,48,47,44,45,47,50,51,49,49,50,50,49,50,52,54,54,53,53,55,57,45,46,47,48,46,42,42,46,49,49,50,50,51,51,50,51,54,56,54,55,55,56,57,45,44,45,45,45,42,42,45,47,47,50,53,54,53,53,52,54,55,54,55,54,52,54,45,45,44,45,46,47,46,45,46,47,49,52,52,52,52,52,52,51,53,52,53,54,55,46,46,45,46,46,47,46,44,45,47,49,50,51,51,51,51,52,51,51,51,53,53,54,46,47,47,47,46,44,43,42,44,47,49,50,51,51,52,52,53,55,53,52,52,51,53,46,45,45,46,46,45,46,46,45,48,49,48,48,50,51,52,52,52,52,52,52,51,53,45,45,45,46,48,48,49,49,47,48,50,50,50,50,51,52,53,52,52,53,54,53,54,45,46,47,48,50,50,50,49,47,47,50,52,52,52,51,51,52,54,55,55,55,56,55,46,48,48,49,52,55,52,51,51,48,49,52,53,52,51,50,51,54,57,58,58,56,53,47,48,48,49,53,56,53,52,51,48,49,52,53,53,52,50,52,54,56,58,57,55,52],
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
