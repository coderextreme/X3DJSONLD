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
        texture=ImageTexture(url=['../../images/5/newport30-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[169,170,176,181,188,193,197,202,207,208,209,210,211,210,210,209,207,205,203,202,201,201,170,169,174,182,189,195,200,206,209,211,213,213,213,212,211,209,207,204,203,202,201,201,169,168,174,182,189,197,203,208,211,213,215,215,214,213,212,210,208,205,203,202,202,201,171,169,177,185,193,202,207,211,214,216,216,216,216,215,213,210,208,206,203,202,201,201,169,173,183,190,199,207,211,213,216,217,218,217,217,216,213,210,208,205,203,202,200,200,168,174,184,192,202,210,213,215,218,219,219,218,217,216,213,211,207,205,202,201,199,198,168,176,185,196,205,212,215,217,219,220,220,219,218,216,213,211,207,204,201,199,197,197,168,177,187,202,209,214,216,218,219,220,221,221,220,218,214,211,207,202,199,197,195,194,174,179,190,203,210,214,216,218,220,221,222,222,221,218,214,211,207,201,198,196,194,193,176,182,192,205,211,215,217,219,220,221,222,222,219,216,212,210,204,198,195,194,194,194,181,187,196,206,211,215,216,218,220,222,222,219,216,211,210,207,201,196,192,191,191,191,182,191,198,205,209,213,214,216,218,220,220,217,213,209,206,202,197,193,190,188,187,187,187,196,203,206,210,212,213,214,215,217,215,213,209,207,204,201,197,192,188,186,185,184,188,199,204,208,210,211,212,213,213,213,211,209,207,205,202,199,195,191,189,187,185,184,191,198,203,207,209,209,210,211,211,210,208,207,205,203,200,197,194,191,189,187,185,184,193,200,203,205,207,208,208,208,208,206,206,205,204,202,200,196,193,191,189,187,185,183,194,201,203,204,204,205,205,205,205,203,204,207,205,201,198,195,192,190,189,187,185,185,192,199,202,203,202,202,203,204,202,202,205,208,203,200,197,194,192,190,189,188,187,187,190,198,200,199,198,199,199,200,199,202,206,208,202,199,197,195,193,192,190,189,188,188,187,195,196,195,193,194,194,196,199,203,206,205,201,199,198,197,195,193,191,190,189,189,185,189,190,191,190,191,194,197,201,205,206,203,200,200,200,198,196,193,191,189,189,188,182,186,188,189,189,191,195,199,203,207,206,203,202,202,201,199,194,191,190,189,188,187,180,183,185,187,188,192,196,203,205,207,204,203,203,202,201,196,193,190,189,188,187,186,179,183,185,186,188,192,197,203,206,207,204,203,203,203,201,196,192,190,189,188,187,186],
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
