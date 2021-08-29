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
        texture=ImageTexture(url=['../../images/5/newport17-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,47,50,48,46,44,43,44,44,42,43,45,43,44,43,42,43,46,47,46,47,48,49,46,50,51,46,44,43,44,45,46,46,46,47,46,45,44,44,46,48,48,48,49,49,49,46,49,51,48,48,48,49,48,49,49,49,48,47,47,49,49,49,50,49,49,50,49,48,46,47,48,48,50,52,54,54,52,51,52,50,49,47,48,50,51,50,49,50,50,49,48,49,50,50,50,52,53,54,55,53,53,53,52,50,48,50,51,53,51,51,50,50,50,50,55,56,56,54,54,55,54,55,55,54,53,54,54,54,54,53,53,53,52,51,50,50,50,58,58,58,59,59,58,56,57,58,57,56,57,55,53,55,53,52,56,55,53,50,48,48,60,60,60,62,61,59,58,58,59,58,58,58,58,57,58,56,54,57,56,54,51,49,49,60,61,61,61,59,58,59,59,59,61,60,60,60,60,60,59,58,59,58,57,53,53,53,57,58,58,56,56,57,59,59,61,63,61,61,62,61,59,60,61,59,59,58,57,55,55,54,57,59,58,58,60,61,61,62,63,64,64,63,62,61,62,62,60,58,57,56,55,56,55,57,60,61,62,62,61,62,64,64,65,64,65,62,62,62,61,59,58,58,58,55,56,56,57,59,61,61,60,59,60,63,65,65,64,66,64,64,63,62,61,58,60,59,57,56,53,53,57,60,60,60,59,59,62,63,63,64,65,66,66,66,65,63,63,62,59,58,58,53,52,53,56,58,60,61,62,62,62,64,65,66,67,68,67,65,64,64,62,61,60,59,55,54,54,55,58,60,62,63,63,63,64,65,67,66,66,65,65,64,62,60,61,63,62,54,55,55,57,59,60,61,62,63,65,65,65,65,65,66,65,65,65,64,62,62,62,61,55,56,56,56,57,59,60,61,63,64,63,64,65,67,67,66,66,65,65,63,62,62,61,55,56,55,54,56,57,59,61,62,62,62,63,66,68,67,66,64,64,63,62,62,61,63,57,54,52,53,55,56,58,59,59,61,62,63,64,63,63,64,63,64,65,64,63,64,65,55,53,52,54,55,56,58,59,59,60,61,63,64,64,63,64,63,63,64,63,62,64,64,55,55,54,55,56,58,57,58,60,60,61,63,64,65,63,62,62,61,61,62,62,64,63,56,55,54,54,54,57,57,58,59,60,60,62,64,65,63,61,62,61,61,62,64,64,64],
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
