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
    meta(content='OliverHazardPerryFFGPrototype.x3d',name='title'),
    meta(content='Prototype for an Oliver Perry (FFG7) Class Navy Frigate. Proto allows weapon placements, hull number, and ship name markings',name='description'),
    meta(content='Patrick Sullivan',name='creator'),
    meta(content='28 May 2006',name='created'),
    meta(content='6 April 2012',name='modified'),
    meta(content='Add entry text that links to OliverHazardPerryFFGExample.x3d',name='TODO'),
    meta(content='Prototypes, FFG7, Oliver Perry Frigate',name='subject'),
    meta(content='DSC_59.jpg',name='Image'),
    meta(content='http://www.public.navy.mil/surflant/ffg28/PublishingImages/DSC_59.jpg',name='Image'),
    meta(content='http://en.wikipedia.org/wiki/Oliver_Hazard_Perry_class_frigate',name='reference'),
    meta(content='http://en.wikipedia.org/wiki/USS_Oliver_Hazard_Perry_(FFG-7)',name='reference'),
    meta(content='http://www.navy.mil/navydata/fact_display.asp?cid=4200&tid=1300&ct=4',name='reference'),
    meta(content='http://www.fas.org/programs/ssp/man/uswpns/navy/surfacewarfare/FFG7_oliverhazardperry.html',name='reference'),
    meta(content='http://www.globalsecurity.org/military/systems/ship/ffg-7.htm',name='reference'),
    meta(content='http://www.navsource.org/archives/07/0707.htm',name='reference'),
    meta(content='FFG.x3d',name='reference'),
    meta(content='OliverHazardPerryFFG.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FFG7OliverHazardPerryUnitedStates/OliverHazardPerryFFGPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Oliver Hazard Perry FFG starboard side, 50m',position=(0,0,50)),
    Viewpoint(description='Oliver Hazard Perry FFG from ahead, 50m',orientation=(-0.09806,0.99034,0.09806,1.58051),position=(50,10,0)),
    Viewpoint(description='Oliver Hazard Perry FFG port side, 50m',orientation=(0,1,0,3.14159),position=(0,0,-50)),
    Viewpoint(description='Oliver Hazard Perry FFG from behind, 50m',orientation=(0.09806,0.99034,0.09806,-1.58051),position=(-50,10,0)),
    Transform(rotation=(0,1,0,-1.5708),
      children=[
      Viewpoint(description='Oliver Hazard Perry FFG from above, 100m',orientation=(1,0,0,-1.5708),position=(0,100,0))]),
    ExternProtoDeclare(name='HullNumber',url=["../../../Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d#HullNumber","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d#HullNumber","../../../Savage/ModelDetailing/HullNumbers/HullNumberPrototype.wrl#HullNumber","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/HullNumberPrototype.wrl#HullNumber"],
      field=[
      field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='FirstNumber',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='SecondNumber',type='SFInt32')]),
    ProtoDeclare(appinfo='Prototype of a DDG51 Class Destroyer',name='FFG',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='The name of the ship ("USS SHIP")',name='ShipName',type='SFString'),
        field(accessType='inputOutput',appinfo='URL for the ISIC seal that is found on the side of most navy ships (e.g. "../../ShipCrests/COMDESRON31/DESRON31.x3d")',name='ISIC',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='The first (or only) digit of the ship hull number [0-9]. Note -1 for no number.',name='HullNumber1',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='The second digit of the ship hull number [0-9]. Note: -1 for no number.',name='HullNumber2',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardFlightDeckWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortFlightDeckWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='SternFlightDeckWeapon',type='MFString',value=["none"])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(scale=(0.3048,0.3048,0.3048),translation=(0,1,0),
          #  Ship Model 
          children=[
          Transform(DEF='FFGShipModel',
            children=[
            Inline(url=["OliverHazardPerryFFG.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FFG7OliverHazardPerryUnitedStates/OliverHazardPerryFFG.x3d","OliverHazardPerryFFG.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FFG7OliverHazardPerryUnitedStates/OliverHazardPerryFFG.wrl"])]),
          #  Hull Numbers 
          Transform(DEF='StarboardBowHullNumber',rotation=(.721,.678,-.141,.523),translation=(53.802,5.007,2.192),
            children=[
            ProtoInstance(DEF='ShipNumber',name='HullNumber',
              IS=IS(
                connect=[
                connect(nodeField='FirstNumber',protoField='HullNumber1'),
                connect(nodeField='SecondNumber',protoField='HullNumber2')]))]),
          Transform(DEF='PortBowHullNumber',rotation=(.025,.99,-.139,2.794),translation=(53.802,5.007,-2.197),
            children=[
            ProtoInstance(name='HullNumber',
              IS=IS(
                connect=[
                connect(nodeField='FirstNumber',protoField='HullNumber1'),
                connect(nodeField='SecondNumber',protoField='HullNumber2')]))]),
          #  ISIC Seals 
          Transform(DEF='StarboardSeal',translation=(19.032,7.152,4.433),
            children=[
            Transform(
              children=[
              Inline(DEF='ISICSeal',
                IS=IS(
                  connect=[
                  connect(nodeField='url',protoField='ISIC')]))])]),
          Transform(DEF='PortSeal',rotation=(0,1,0,3.14),translation=(19.032,7.152,-4.395),
            children=[
            Transform(
              children=[
              Inline(USE='ISICSeal')])]),
          #  Weapon Placements 
          Transform(DEF='StarboardBowWeapon',rotation=(0,1,0,3.14),translation=(24.02,5.655,5.807),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardBowWeapon')]))]),
          Transform(DEF='PortBowWeapon',translation=(24.02,5.681,-5.794),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortBowWeapon')]))]),
          Transform(DEF='StarboardFlightDeckWeapon',rotation=(0,1,0,3.14),translation=(-50.342,4.213,5.961),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardFlightDeckWeapon')]))]),
          Transform(DEF='PortFlightDeckWeapon',translation=(-50.342,4.232,-5.631),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortFlightDeckWeapon')]))]),
          Transform(DEF='SternFlightDeckWeapon',rotation=(0,1,0,1.57),translation=(-69,3.922,4.785),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='SternFlightDeckWeapon')]))])])])),
    ProtoInstance(DEF='FFG-7',name='FFG')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OliverHazardPerryFFGPrototype.py")
