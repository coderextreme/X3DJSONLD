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
        texture=ImageTexture(url=['../../images/5/newport30-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[228,224,223,220,215,211,204,202,198,195,194,193,192,188,182,174,169,169,171,167,163,163,229,225,219,215,212,211,207,203,196,194,196,194,188,182,175,170,170,170,170,164,162,162,225,222,219,217,212,207,203,198,195,195,191,189,185,180,174,170,169,169,166,164,163,162,224,220,216,211,209,206,201,199,199,197,191,185,182,178,175,172,168,169,171,169,165,165,228,222,218,212,210,207,204,201,194,192,188,185,178,178,177,177,174,172,175,172,167,167,227,223,218,214,208,207,205,197,195,188,184,181,182,179,174,176,178,178,177,173,167,167,227,222,221,214,211,206,201,195,190,188,185,183,181,184,183,182,179,181,177,173,170,170,231,225,217,212,207,204,199,193,190,188,184,183,184,186,188,184,182,182,179,175,172,171,228,226,218,213,207,202,197,191,189,189,188,187,190,190,187,185,185,180,177,178,174,173,223,217,218,215,210,201,194,192,189,188,191,196,196,190,189,184,183,181,177,178,175,173,223,216,214,211,204,199,195,192,189,190,196,197,197,195,190,186,182,179,177,173,173,172,224,218,210,206,204,201,193,189,190,192,197,199,197,196,191,187,183,177,176,172,170,170,221,216,214,212,204,197,194,190,190,194,196,199,200,200,192,185,181,178,177,173,172,172,218,220,213,208,201,196,192,190,190,195,199,204,206,202,192,188,183,179,177,175,173,174,216,216,211,206,206,199,193,193,194,199,207,212,209,202,197,191,184,180,179,174,171,171,221,216,215,207,203,199,198,199,204,210,214,215,212,203,195,191,185,182,180,178,177,178,219,214,214,209,203,201,203,205,210,214,220,216,211,207,200,192,188,184,181,182,182,181,221,216,209,203,202,202,205,212,219,220,221,216,213,205,198,191,187,186,184,184,183,183,220,215,211,206,208,207,210,217,221,224,219,222,214,206,199,194,191,189,185,183,180,180,216,215,211,210,210,210,217,222,225,223,219,217,215,210,204,197,192,189,186,184,181,180,215,212,215,213,212,215,220,223,225,225,220,215,218,211,206,199,192,190,188,184,182,182,216,217,216,217,216,218,220,223,225,224,223,218,216,211,205,198,194,192,190,188,186,186,215,217,217,213,212,218,223,226,225,224,227,223,215,210,205,201,195,193,190,189,188,188,215,217,216,212,211,218,224,227,225,224,226,223,215,210,206,201,196,194,190,189,188,188],
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
