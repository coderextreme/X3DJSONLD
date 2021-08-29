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
        texture=ImageTexture(url=['../../images/5/newport13-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[52,50,49,48,47,48,46,48,48,48,46,45,46,45,47,49,51,50,50,50,50,51,51,50,50,50,48,48,50,49,48,48,48,47,47,48,48,48,50,50,52,51,52,52,52,52,49,50,50,48,47,47,49,47,46,48,48,49,50,49,49,50,50,51,52,53,54,53,53,48,48,48,49,49,47,46,45,46,46,47,48,49,51,52,51,49,51,53,55,55,55,56,48,48,47,47,48,48,47,46,46,46,46,49,51,51,51,52,51,53,55,56,57,57,57,47,48,48,47,48,48,48,48,46,46,48,49,50,50,51,52,53,56,57,56,58,56,55,47,49,50,50,48,48,48,47,46,46,49,49,49,50,53,55,56,57,55,55,56,56,56,48,48,48,49,49,48,48,49,49,48,48,50,51,55,56,56,55,56,56,55,56,57,57,48,48,47,48,49,49,50,50,50,49,48,51,53,57,59,57,54,54,58,58,56,57,57,48,49,49,49,50,50,52,51,50,49,49,52,53,53,55,55,53,54,57,58,57,57,57,50,51,50,50,51,52,52,51,51,51,50,50,51,51,51,52,54,52,54,56,57,59,58,49,50,50,50,51,51,51,50,50,50,48,49,51,51,49,51,54,56,57,56,55,57,59,50,51,51,50,50,50,50,50,50,49,49,49,50,51,50,50,53,58,58,56,55,58,61,49,50,51,50,49,50,51,50,50,50,51,50,50,51,53,53,54,57,58,56,56,59,61,51,52,53,53,51,51,51,50,50,51,51,51,50,51,51,52,53,54,56,55,55,57,57,52,53,54,54,52,50,52,52,53,52,51,51,50,50,50,52,51,50,52,53,54,56,56,52,52,53,53,51,49,50,53,52,52,50,50,51,52,53,54,51,50,50,51,53,55,57,49,49,53,54,53,52,52,54,51,51,51,50,51,52,53,54,52,52,51,53,54,54,55,48,49,51,53,54,53,53,54,52,51,52,52,52,52,52,53,53,55,55,56,54,52,52,48,51,53,54,53,52,52,53,51,51,51,51,51,53,55,57,55,56,57,56,53,49,48,50,50,52,52,54,53,52,51,50,51,50,51,53,56,58,59,57,55,54,55,53,51,50,47,49,52,52,52,53,53,55,56,54,52,54,55,57,58,57,55,52,50,51,52,52,52,47,49,52,51,51,52,55,58,58,55,53,54,55,56,56,55,54,51,50,50,51,51,51],
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
