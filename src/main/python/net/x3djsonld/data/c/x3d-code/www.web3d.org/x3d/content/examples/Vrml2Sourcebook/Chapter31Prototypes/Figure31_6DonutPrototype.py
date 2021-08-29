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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure31_6DonutPrototype.x3d',name='title'),
    meta(content='Figure 31.6, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig06.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='30 March 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A donut (torus) node prototype. Also see Figures 30.5 and 31.7 for comparison.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure31_6DonutPrototype.x3d'),
    ProtoDeclare(name='Donut',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='crossSectionRadius',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='spineRadius',type='SFFloat',value=2),
        field(accessType='initializeOnly',name='crossSectionResolution',type='SFInt32',value=16),
        field(accessType='initializeOnly',name='spineResolution',type='SFInt32',value=16),
        field(accessType='inputOnly',name='set_crossSectionRadius',type='SFFloat'),
        field(accessType='inputOnly',name='set_spineRadius',type='SFFloat')]),
      ProtoBody=ProtoBody(
        children=[
        Extrusion(DEF='DonutExtrusion',beginCap=False,creaseAngle=1.57,endCap=False),
        #  Donut maker creates torus on initialization - external script. Modified script to add endpoints matching startpoints. 
        Script(DEF='DonutMakerInternalScript',
          field=[
          field(accessType='initializeOnly',name='crossSectionRadius',type='SFFloat'),
          field(accessType='initializeOnly',name='spineRadius',type='SFFloat'),
          field(accessType='initializeOnly',name='crossSectionResolution',type='SFInt32'),
          field(accessType='initializeOnly',name='spineResolution',type='SFInt32'),
          field(accessType='inputOnly',name='set_crossSectionRadius',type='SFFloat'),
          field(accessType='inputOnly',name='set_spineRadius',type='SFFloat'),
          field(accessType='outputOnly',name='crossSection_changed',type='MFVec2f'),
          field(accessType='outputOnly',name='spine_changed',type='MFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='crossSectionRadius',protoField='crossSectionRadius'),
            connect(nodeField='spineRadius',protoField='spineRadius'),
            connect(nodeField='crossSectionResolution',protoField='crossSectionResolution'),
            connect(nodeField='spineResolution',protoField='spineResolution'),
            connect(nodeField='set_crossSectionRadius',protoField='set_crossSectionRadius'),
            connect(nodeField='set_spineRadius',protoField='set_spineRadius')])),
        ROUTE(fromField='spine_changed',fromNode='DonutMakerInternalScript',toField='set_spine',toNode='DonutExtrusion'),
        ROUTE(fromField='crossSection_changed',fromNode='DonutMakerInternalScript',toField='set_crossSection',toNode='DonutExtrusion')])),
    #  It is a good practice to include default message linking to an example scene, in case a user tries to view this Prototype library directly. 
    Anchor(description='Figure31_7DonutExternalPrototype example',parameter=["target=_blank"],url=["Figure31_7DonutExternalPrototype.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d","Figure31_7DonutExternalPrototype.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.wrl"],
      children=[
      Shape(
        geometry=Text(string=["Figure31_6DonutPrototype","contains a prototype definition","","Click on text to see a Donut in","Figure31_7DonutExternalPrototype"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.6))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure31_6DonutPrototype.py")
