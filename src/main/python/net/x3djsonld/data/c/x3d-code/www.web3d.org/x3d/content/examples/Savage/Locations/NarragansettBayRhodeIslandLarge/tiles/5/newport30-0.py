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
        texture=ImageTexture(url=['../../images/5/newport30-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[209,211,218,220,222,227,231,231,233,233,230,234,240,244,244,238,231,229,230,229,228,228,211,217,220,223,226,227,231,234,234,237,237,238,240,244,242,237,236,232,231,229,230,229,214,215,218,225,231,231,232,235,237,238,240,242,242,243,240,234,236,235,232,229,226,225,217,220,222,231,233,233,231,235,237,239,242,244,243,244,242,242,237,237,234,228,224,224,221,227,230,233,231,234,237,234,234,239,243,244,242,241,244,241,237,236,232,230,228,228,226,230,234,233,235,239,237,234,236,240,244,242,240,240,239,241,242,242,239,237,229,227,225,229,233,234,234,236,240,244,243,244,244,240,239,239,239,240,243,243,243,237,229,227,223,227,231,233,235,239,242,245,246,244,242,240,238,237,236,240,241,243,244,239,232,231,220,227,231,235,237,239,242,243,248,243,239,239,240,238,239,243,244,243,238,232,228,228,216,221,227,235,240,243,245,246,246,243,239,240,240,241,244,244,242,239,232,226,224,223,219,224,232,235,238,240,242,241,240,241,241,239,241,244,242,243,242,236,233,228,225,223,220,228,231,233,236,240,243,240,238,239,242,245,243,243,242,244,240,235,232,230,224,224,223,230,232,234,234,237,238,238,239,239,240,242,245,246,248,241,234,233,229,226,222,221,222,229,233,234,236,234,232,234,234,237,239,244,247,247,249,245,239,233,229,225,219,218,225,226,230,230,230,231,232,234,236,240,242,243,249,251,251,245,238,233,228,221,216,216,223,225,223,224,226,228,231,234,235,241,244,249,250,252,250,242,237,231,226,221,222,221,221,219,218,222,224,227,232,236,236,241,248,255,255,253,248,242,234,226,224,223,220,219,213,214,215,219,221,224,227,232,236,242,247,251,253,251,245,237,234,225,219,221,221,221,208,214,217,216,218,223,226,230,237,244,249,250,251,247,241,235,230,227,223,221,220,220,208,210,216,219,216,221,227,230,239,247,250,250,248,246,242,234,231,228,223,219,216,216,209,211,211,214,219,222,230,233,240,247,250,253,251,243,239,234,229,226,222,220,217,215,208,210,212,215,220,225,231,238,243,244,246,248,244,237,233,232,226,222,221,217,216,216,206,209,212,215,220,223,232,242,246,246,246,242,239,233,227,225,224,221,221,217,215,215,206,208,211,216,222,224,231,242,247,245,245,242,239,234,227,224,222,221,220,216,215,215],
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
