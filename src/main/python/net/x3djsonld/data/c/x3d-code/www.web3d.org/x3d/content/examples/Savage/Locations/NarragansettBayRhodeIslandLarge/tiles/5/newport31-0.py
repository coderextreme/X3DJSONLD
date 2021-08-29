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
        texture=ImageTexture(url=['../../images/5/newport31-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[206,208,211,216,222,224,231,242,247,245,245,242,239,234,227,224,222,221,220,216,215,215,206,207,209,216,223,229,231,239,244,243,240,236,231,231,229,223,220,218,215,214,216,216,202,205,209,213,223,228,227,232,238,240,235,232,230,230,226,221,215,213,216,218,217,216,200,202,207,210,213,218,224,226,226,232,231,225,224,225,222,217,218,215,216,216,214,214,194,198,199,202,206,212,218,220,221,224,222,220,219,216,215,216,217,217,220,221,221,221,187,189,193,195,199,203,207,212,214,214,213,216,216,213,214,215,217,219,221,226,225,224,178,185,191,195,197,199,200,202,205,205,207,209,210,213,214,217,218,220,224,228,228,228,178,186,191,192,192,192,197,200,202,197,199,205,208,209,215,216,222,226,225,229,230,232,184,188,193,193,192,191,192,195,197,193,194,198,203,208,216,220,226,229,230,234,234,234,191,194,194,192,190,191,189,187,190,192,194,197,202,209,217,222,228,233,236,236,234,234,195,196,192,190,191,191,186,182,187,190,194,200,205,214,222,224,226,231,236,236,236,236,192,190,192,193,188,189,186,182,185,190,194,199,208,219,225,228,231,235,235,234,235,235,191,189,193,192,187,187,183,186,192,194,194,201,212,222,227,230,233,234,237,235,236,236,193,192,191,188,188,186,185,191,190,194,197,204,213,224,227,231,236,234,234,237,240,241,197,196,191,191,189,185,185,186,187,190,198,205,216,222,227,233,236,234,234,236,239,239,202,199,195,194,191,185,186,185,185,190,199,209,217,219,228,232,236,237,235,237,235,236,208,203,198,191,189,187,188,188,189,192,199,209,218,223,229,237,236,237,235,235,236,236,207,202,195,195,191,191,194,194,192,193,200,209,220,231,238,240,238,239,237,239,240,240,203,197,197,192,191,192,194,198,195,198,207,217,225,232,238,241,240,239,238,239,242,242,203,196,194,191,189,190,193,199,199,202,212,221,228,232,235,235,239,243,242,243,246,246,210,198,190,190,188,188,189,196,200,204,213,220,227,231,232,235,236,238,242,242,242,242,219,207,198,189,186,188,189,193,195,202,209,219,226,229,234,236,237,233,237,240,241,241,225,219,209,198,190,187,189,190,194,199,204,213,222,227,232,235,237,237,239,241,237,237,226,222,211,199,191,188,188,189,193,198,203,213,221,226,231,235,238,239,239,240,237,237],
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
