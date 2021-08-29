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
        texture=ImageTexture(url=['../../images/5/newport31-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[188,186,184,185,190,198,206,212,215,214,208,202,196,190,187,180,174,167,161,155,152,152,188,185,184,185,189,199,208,213,214,211,205,200,195,192,186,180,173,165,158,156,158,158,188,186,184,185,193,201,207,212,212,208,203,200,196,190,183,176,169,162,160,163,165,165,188,185,184,185,191,198,204,209,209,204,202,198,193,186,179,175,167,167,168,169,171,171,188,186,184,183,185,192,199,204,203,201,199,195,190,186,181,172,173,174,175,173,171,171,187,186,185,186,183,185,193,201,202,200,197,195,191,184,175,175,180,181,181,178,175,175,193,187,187,189,187,185,193,198,197,196,194,191,187,178,178,184,186,185,183,182,180,179,196,196,189,188,187,185,190,193,193,192,189,185,180,178,184,192,193,189,186,186,184,183,199,197,191,185,185,185,187,191,193,191,187,184,179,181,189,194,194,190,189,190,187,187,200,199,194,187,185,185,187,192,193,191,188,187,182,182,192,195,194,192,192,190,187,187,199,199,197,191,191,189,193,195,195,192,190,189,186,187,194,197,195,193,191,189,186,185,201,199,198,195,196,196,198,199,197,194,191,192,190,192,195,195,194,192,190,188,185,185,205,202,198,197,196,196,198,201,200,197,194,194,194,195,196,195,193,191,189,188,187,187,204,202,198,198,196,195,199,202,201,200,197,195,197,197,198,196,193,191,190,188,188,188,203,201,200,197,195,195,198,203,202,200,198,198,199,199,199,198,195,192,191,191,189,189,204,202,200,196,195,195,199,203,202,200,199,200,202,202,201,200,197,193,194,193,190,190,207,199,198,196,195,195,197,202,200,200,201,202,203,204,205,204,200,197,197,194,192,192,201,198,198,196,195,195,196,199,199,200,202,203,204,206,211,209,203,199,200,197,194,194,201,197,197,195,195,195,196,198,199,201,201,204,207,208,210,210,206,203,203,200,199,198,198,197,196,196,195,195,196,197,197,200,202,203,208,209,209,212,211,213,204,204,202,202,197,197,196,196,195,196,196,196,196,200,204,209,209,212,213,211,211,211,213,213,209,209,196,196,195,196,195,196,196,196,196,201,208,210,211,212,215,214,216,219,218,219,218,218,195,194,195,195,196,196,196,195,198,206,211,212,215,218,216,222,222,218,223,222,223,223,195,194,195,195,196,196,196,195,198,206,211,213,214,217,218,223,223,221,224,221,223,223],
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
