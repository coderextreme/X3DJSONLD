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
        texture=ImageTexture(url=['../../images/5/newport31-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[215,217,216,212,211,218,224,227,225,224,226,223,215,210,206,201,196,194,190,189,188,188,216,216,214,215,216,221,225,229,228,223,222,218,215,213,208,202,197,192,191,190,189,188,216,212,211,218,222,224,226,227,231,228,223,220,220,213,206,199,193,192,195,191,189,188,214,215,216,218,224,228,231,230,229,226,226,225,221,213,204,198,194,191,190,191,189,188,221,218,220,222,226,229,233,234,231,226,223,222,221,214,206,203,198,194,190,190,189,188,224,225,224,225,229,233,232,233,232,230,225,224,226,218,212,206,201,195,189,188,188,187,228,230,232,233,232,233,234,235,233,230,229,226,222,220,216,210,204,199,195,192,192,193,232,235,234,235,236,237,237,235,232,236,234,230,227,225,220,213,208,203,200,195,195,196,234,233,234,238,238,241,241,237,235,238,237,234,232,232,225,218,212,209,204,200,198,199,234,234,239,239,243,243,239,237,236,235,237,237,238,236,229,222,217,211,207,201,199,200,236,237,239,241,241,244,243,241,240,235,238,240,238,235,228,222,218,211,209,203,199,199,235,237,242,242,245,245,244,242,237,234,237,236,238,234,231,224,216,209,205,203,201,201,236,238,241,245,246,243,244,243,241,238,238,240,239,236,231,224,219,213,207,209,205,205,241,241,241,242,243,241,243,245,243,242,240,242,244,243,240,234,228,222,215,211,205,204,239,239,239,241,242,240,242,241,242,244,243,245,248,246,241,236,230,225,218,211,204,203,236,240,241,240,241,241,238,240,239,240,244,244,244,245,243,236,230,222,218,210,205,204,236,239,242,242,243,241,237,235,235,236,240,240,239,243,240,233,227,220,216,210,207,207,240,239,245,246,242,240,238,233,232,233,235,238,236,234,233,228,221,217,213,208,202,201,242,242,247,247,243,241,235,231,232,233,232,231,229,226,222,219,216,215,210,205,202,201,246,243,244,245,243,240,236,232,230,227,225,227,225,224,220,218,209,206,204,201,199,198,242,245,243,243,239,234,236,234,232,229,227,225,222,222,218,214,206,202,197,197,197,197,241,243,241,240,241,236,238,235,233,231,228,225,222,219,215,211,207,200,196,197,196,196,237,240,245,240,238,243,244,240,238,235,231,226,221,216,215,214,210,202,198,199,195,195,237,240,246,239,238,243,244,240,239,235,232,226,221,216,215,214,209,203,198,199,195,195],
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
