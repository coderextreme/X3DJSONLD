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
        texture=ImageTexture(url=['../../images/5/newport18-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[56,55,54,54,54,57,57,58,59,60,60,62,64,65,63,61,62,61,61,62,64,64,64,57,56,54,53,54,54,55,56,57,58,60,61,62,63,62,61,61,61,62,64,67,66,65,55,54,55,55,54,53,54,55,56,56,58,60,60,62,62,61,60,61,63,65,67,66,66,55,54,55,54,54,54,54,56,56,57,58,59,58,59,59,58,59,60,63,66,66,67,67,55,55,55,54,54,54,54,56,56,55,56,56,56,56,56,57,57,59,62,65,66,68,68,54,54,55,54,53,53,53,51,52,53,54,54,55,54,55,55,56,58,60,62,64,67,68,55,55,54,53,52,52,51,51,51,53,53,52,53,54,54,55,55,57,58,60,61,63,65,56,54,53,54,52,51,52,52,52,52,51,50,50,51,52,52,53,55,56,57,59,60,61,58,56,53,53,52,52,51,50,49,48,48,48,48,47,49,51,52,53,55,56,58,58,59,56,55,55,52,52,52,51,50,48,46,45,44,44,46,48,50,52,53,55,56,57,58,58,56,55,53,51,49,49,49,46,45,45,43,43,44,49,50,51,51,52,54,55,55,57,59,55,53,51,49,47,47,45,43,42,42,43,44,45,51,50,51,52,52,53,53,54,55,58,53,51,50,47,46,45,44,42,41,41,42,45,46,47,47,49,52,52,53,56,55,53,54,50,50,49,47,45,44,44,42,41,40,40,42,43,45,48,51,53,53,53,55,55,54,55,49,50,49,48,44,44,44,43,41,40,40,40,40,41,46,50,53,55,55,54,53,54,56,49,50,50,49,47,46,44,40,40,40,40,40,40,40,44,48,50,53,54,54,54,55,57,49,49,49,49,48,46,45,43,41,40,40,40,40,40,44,46,48,51,51,53,56,57,58,51,49,51,51,50,47,47,46,43,40,40,40,40,40,43,44,46,49,51,54,57,57,57,51,49,49,51,52,50,49,47,44,40,40,40,40,40,40,43,44,46,52,56,59,58,58,52,51,51,52,52,51,49,47,44,42,41,41,42,44,45,46,47,48,51,54,59,60,59,55,55,54,54,52,51,49,48,46,44,44,43,42,42,42,45,47,50,51,54,56,59,59,55,54,54,53,52,51,49,48,47,46,46,44,43,43,43,44,46,48,51,53,57,60,60,54,54,54,54,53,51,49,48,47,46,46,45,45,45,44,45,46,46,50,53,57,62,61],
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
