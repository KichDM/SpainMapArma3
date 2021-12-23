class CfgPatches {

    class Spain {
        author = {
            "Victor94, Mike93041 y colaboracion del equipo de SpainIsLife"
        };
        authorUrl = "http://spainislife.es/";
        name = "España";
        requiredAddons = {
            "A3_Rocks_F_Water",
            "Papeleras",
            "Aceras",
            "Apartamento1",
            "ATM",
            "Bancodesentarse",
            "casamoderna2",
            "ComisariaCNP",
            "Concesionario",
            "Carretera",
            "edificiodec1",
            "edificiodec12",
            "edificiodec13",
            "edificiodec3",
            "edificiodec4",
            "edificiodec5",
            "fnak",
            "gasolinerared",
            "inmobiliaria",
            "maceta",
            "molinocastellano",
            "Paradabus",
            "Parkingslot",
            "Parkingticket",
            "Pasarelaplaya",
            "reinasofia",
            "sueloplaza",
            "toroosborne",
            "edificiodec8",
            "Molinocastellano",
            "A3_Rocks_F_Sharp",
            "A3_Rocks_F_Blunt",
            "mm_showroom",
            "Mattaust_Objects",
            "HouseDoubleAL",
            "HouseA",
            "AustraliaPost",
            "Land_PostB",
            "Centrelink",
            "Pub_A",
            "Pub_C",
            "PoliceStation",
            "mm_buildings2",
            "PoliceStation",
            "mm_buildings",
            "mm_bank",
            "a3_boat_f",
            "beuh_canne",
            "A3_Characters_F_Common",
            "plp_urban_barriers",
            "A3_Anims_F_EPA",
            "A3_Anims_F",
            "A3_CargoPoses_F",
            "plp_beachobjects",
            "A3_Structures_F_Bridges",
            "A3_Rocks_F_Blunt",
            "A3_Map_Stratis_Data",
            "A3_Functions_F",
            "A3_Plants_F_Bush",
            "A3_Roads_F",
            "A3_Weapons_F",
            "A3_Data_F",
            "A3_Map_Data",
            "A3_Roads_F",
            "A3_Structures_F",
            "A3_Plants_F",
            "A3_Rocks_F",
            "A3_sounds_F",
            "A3_Map_Stratis",
            "A3_structures_f_bootcamp",
            "A3_structures_f_data",
            "A3_Structures_F_EPA",
            "A3_structures_f_epb",
            "A3_structures_f_epc",
            "A3_structures_f_exp_a",
            "A3_structures_f_households",
            "A3_structures_f_ind",
            "A3_structures_f_mil",
            "A3_structures_f_wrecks",
            "A3_Structures_F_Naval_Piers",
            "A3_Signs_F",
            "A3_Structures_F_Walls",
            "A3_Structures_F_EPB_Civ_Garbage",
            "A3_Structures_F_Civ_Garbage",
            "Papeleras",
            "Helipad_MapObject",
            "A3_Structures_F_Civ_Accessories",
            "A3_Structures_F_EPC_Civ_Garbage",
            "A3_Structures_F_Ind_DieselPowerPlant",
            "A3_Structures_F_Ind_SolarPowerPlant",
            "A3_Structures_F_Ind_AirPort",
            "A3_Structures_F_Heli_Furniture",
            "A3_Structures_F_Heli_Items_Electronics",
            "A3_Structures_F_Furniture",
            "A3_Structures_F_Civ_Camping",
            "A3_Structures_F_Civ_Constructions",
            "A3_Structures_F_Ind_Transmitter_Tower",
            "A3_Structures_F_Bootcamp_Items_Electronics",
            "A3_Structures_F_Civ_InfoBoards",
            "A3_Structures_F_Heli_Civ_Accessories",
            "A3_Structures_F_EPA_Mil_Scrapyard",
            "A3_Structures_F_Households_WIP",
            "A3_Props_F_Exp_Industrial_HeavyEquipment",
            "A3_Structures_F_EPC_Civ_Playground",
            "A3_Structures_F_EPC_Civ_Accessories",
            "A3_Structures_F_Ind_Crane",
            "A3_Structures_F_Ind_Cargo",
            "A3_Structures_F_EPB_Civ_PlayGround",
            "A3_Structures_F_Civ_Lamps",
            "A3_Structures_F_Households_Addons",
            "A3_Structures_F_Civ_PlayGround",
            "A3_Props_F_Exp_Civilian_Garbage",
            "A3_Structures_F_Civ_SportsGrounds",
            "A3_Structures_F_Training",
            "A3_Structures_F_EPA_Items_Tools",
            "A3_Structures_F_Bootcamp_Items_Sport",
            "A3_Structures_F_EPB_Furniture",
            "A3_Structures_F_EPC_Civ_Kiosks",
            "A3_Structures_F_EPB_Civ_Accessories",
            "Mattaust_Objects",
            "A3_Structures_F_Bootcamp_Civ_SportsGrounds",
            "Pub_A",
            "A3_Structures_F_EPC_Civ_Tourism",
            "A3_Structures_F_EPC_Civ_Camping",
            "A3_Structures_F_Naval_RowBoats",
            "A3_Structures_F_Naval_Buoys",
            "A3_Structures_F_Dominants_Castle",
            "A3_Structures_F_Civ_Statues"
        };
        requiredVersion = 0.100000;
        units = {};
        weapons = {};
    };
};

class CfgVehicles {};

class CfgWorlds {
    mapSize = 20480;
    mapZone = 35;
    mapArea = {
        25.011957,
        39.718452,
        25.481527,
        40.094578
    };

    class DefaultWorld {

        class Weather {
            /*extern*/
            class Overcast;
        };
        /*extern*/
        class WaterExPars;
    };

    class CAWorld: DefaultWorld {

        class Grid {};
        /*extern*/
        class DayLightingBrightAlmost;
        /*extern*/
        class DayLightingRainy;
        /*extern*/
        class DefaultClutter;

        class Weather: Weather {
            /*extern*/
            class Lighting;

            class Overcast: Overcast {
                /*extern*/
                class Weather1;
                /*extern*/
                class Weather2;
                /*extern*/
                class Weather3;
                /*extern*/
                class Weather4;
                /*extern*/
                class Weather5;
                /*extern*/
                class Weather6;
            };
        };
    };
    /*extern*/
    class DefaultLighting;

    class Spain: CAWorld {
        /*extern*/
        class DefaultClutter;

        class clutter {

            class SpainSeaWeed1: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_SeaWeed1.p3d";
                affectedByWind = 0.200000;
                swLighting = 0;
                scaleMin = 0.400000;
                scaleMax = 1;
            };

            class SpainSeaWeed2: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_SeaWeed2.p3d";
                affectedByWind = 0.200000;
                swLighting = 0;
                scaleMin = 0.300000;
                scaleMax = 1;
            };

            class SpainCoral1: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral1.p3d";
                affectedByWind = 0;
                swLighting = 0;
                scaleMin = 0.300000;
                scaleMax = 1;
            };

            class SpainCoral2: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral2.p3d";
                affectedByWind = 0;
                swLighting = 0;
                scaleMin = 0.300000;
                scaleMax = 1;
            };

            class SpainCoral3: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral3.p3d";
                affectedByWind = 0.100000;
                swLighting = 0;
                scaleMin = 0.300000;
                scaleMax = 0.500000;
            };

            class SpainCoral4: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral4.p3d";
                affectedByWind = 0.100000;
                swLighting = 0;
                scaleMin = 0.300000;
                scaleMax = 1;
            };

            class SpainCoral5: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral5.p3d";
                affectedByWind = 0.050000;
                swLighting = 0;
                scaleMin = 0.200000;
                scaleMax = 0.600000;
            };

            class SpainGrassGreenGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
                affectedByWind = 0.600000;
                swLighting = 1;
                scaleMin = 0.700000;
                scaleMax = 1.000000;
            };

            class SpainThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.050000;
                swLighting = 0;
                scaleMin = 0.300000;
                scaleMax = 0.500000;
            };

            class SpainThornGreenBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.050000;
                swLighting = 0;
                scaleMin = 0.700000;
                scaleMax = 0.900000;
            };

            class SpainPlantGreenShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
                affectedByWind = 0.500000;
                swLighting = 1;
                scaleMin = 0.600000;
                scaleMax = 1.100000;
            };
        };
        dynLightMinBrightnessAmbientCoef = 0.500000;
        dynLightMinBrightnessAbsolute = 0.050000;

        class Sea {
            seaTexture = "a3\data_f\seatexture_co.paa";
            seaMaterial = "#water";
            shoreMaterial = "#shore";
            shoreFoamMaterial = "#shorefoam";
            shoreWetMaterial = "#shorewet";
            WaterMapScale = 20;
            WaterGrid = 50;
            MaxTide = 0;
            MaxWave = 0.250000;
            SeaWaveXScale = "2.0/50";
            SeaWaveZScale = "1.0/50";
            SeaWaveHScale = 1.000000;
            SeaWaveXDuration = 5000;
            SeaWaveZDuration = 10000;
        };

        class Underwater {
            noWaterFog = -0.001000;
            fullWaterFog = 0.001000;
            deepWaterFog = 200;
            waterFogDistanceNear = 10;
            waterFogDistance = 40;
            waterColor = {
                0.040000,
                0.160000,
                0.220000
            };
            deepWaterColor = {
                0.000000,
                0.001000,
                0.009000
            };
            surfaceColor = {
                0.040000,
                0.160000,
                0.220000
            };
            deepSurfaceColor = {
                0.000000,
                0.001000,
                0.009000
            };
        };

        class SeaWaterShaderPars {
            refractionMoveCoef = 0.030000;
            minWaterOpacity = 0.000000;
            waterOpacityDistCoef = 0.400000;
            underwaterOpacity = 0.500000;
            waterOpacityFadeStart = 60;
            waterOpacityFadeLength = 120;
        };

        class WaterExPars: WaterExPars {
            fogDensity = 0.070000;
            fogColor = {
                0.030150,
                0.071550,
                0.090450
            };
            fogColorExtinctionSpeed = {
                0.181400,
                0.015900,
                0.011100
            };
            ligtExtinctionSpeed = {
                0.181400,
                0.015900,
                0.011100
            };
            diffuseLigtExtinctionSpeed = {
                0.381400,
                0.215900,
                0.211100
            };
            fogGradientCoefs = {
                0.350000,
                1.000000,
                1.700000
            };
            fogColorLightInfluence = {
                0.800000,
                0.200000,
                1.000000
            };
            shadowIntensity = 0.000000;
            ssReflectionStrength = 0.850000;
            ssReflectionMaxJitter = 1.000000;
            ssReflectionRippleInfluence = 0.200000;
            ssReflectionEdgeFadingCoef = 10.000000;
            ssReflectionDistFadingCoef = 4.000000;
            refractionMinCoef = 0.030000;
            refractionMaxCoef = 0.140000;
            refractionMaxDist = 5.100000;
            specularMaxIntensity = 100;
            specularPowerOvercast0 = 750;
            specularPowerOvercast1 = 50;
            specularNormalModifyCoef = 0.015000;
            foamAroundObjectsIntensity = 0.150000;
            foamAroundObjectsFadeCoef = 8.000000;
            foamColorCoef = 2.000000;
            foamDeformationCoef = 0.020000;
            foamTextureCoef = 0.200000;
            foamTimeMoveSpeed = 0.200000;
            foamTimeMoveAmount = 0.100000;
            shoreDarkeningMaxCoef = 0.450000;
            shoreDarkeningOffset = 0.360000;
            shoreDarkeningGradient = 0.080000;
            shoreWaveTimeScale = 0.800000;
            shoreWaveShifDerivativeOffset = -0.800000;
            shoreFoamIntensity = 0.250000;
            shoreMaxWaveHeight = 0.150000;
            shoreWetLayerReflectionIntensity = 0.550000;
        };
        causticsEnabled = 1;
        causticsTextureMask = "A3\data_f\caustics\caustics_anim_%03d.paa";
        causticsTextureCount = 32;
        causticsDistanceLimit = 200.000000;
        causticsDepthLimit = 80.000000;
        causticsTextureArea = 2.000000;
        causticsTextureAreaDeep = 156.000000;
        causticsTextureChangeInterval = 0.040000;
        causticsDepthFadeCoef = 0.050000;
        causticsTextureDepthGranularity = 2.500000;
        causticsBrightnessCoef = 4.000000;
        startWeather = 0.300000;
        startFog = 0.000000;
        forecastWeather = 0.000000;
        forecastFog = 0.000000;
        startFogBase = 250.000000;
        forecastFogBase = 250.000000;
        startFogDecay = 0.014000;
        forecastFogDecay = 0.014000;
        fogBeta0Min = 0.000000;
        fogBeta0Max = 0.050000;
        skyColorInfluencesFogColor = 0;
        hazeDistCoef = 0.100000;
        hazeFogCoef = 0.980000;
        fogHeight = 2000;
        hazeBaseHeight = 0;
        hazeBaseBeta0 = 0.000080;
        hazeDensityDecay = 0.000360;
        aroundSunCoefMultiplier = 1.400000;
        aroundSunCoefExponent = 12.000000;
        horizonSunColorationIntensity = 0.001000;

        class HDRNewPars {
            minAperture = 0.000010;
            maxAperture = 256;
            apertureRatioMax = 4;
            apertureRatioMin = 10;
            bloomImageScale = 1.000000;
            bloomScale = 0.090000;
            bloomExponent = 0.750000;
            bloomLuminanceOffset = 0.400000;
            bloomLuminanceScale = 0.150000;
            bloomLuminanceExponent = 0.250000;
            tonemapMethod = 1;
            tonemapShoulderStrength = 0.220000;
            tonemapLinearStrength = 0.120000;
            tonemapLinearAngle = 0.100000;
            tonemapToeStrength = 0.200000;
            tonemapToeNumerator = 0.022000;
            tonemapToeDenominator = 0.200000;
            tonemapLinearWhite = 11.200000;
            tonemapExposureBias = 1.000000;
            tonemapLinearWhiteReinhard = "2.5f";
            eyeAdaptFactorLight = 3.300000;
            eyeAdaptFactorDark = 0.750000;
            nvgApertureMin = 10.000000;
            nvgApertureStandard = 12.500000;
            nvgApertureMax = 16.500000;
            nvgStandardAvgLum = 10;
            nvgLightGain = 320;
            nvgTransition = 1;
            nvgTransitionCoefOn = "40.0f";
            nvgTransitionCoefOff = "0.01f";
            nightShiftMinAperture = 0;
            nightShiftMaxAperture = 0.002000;
            nightShiftMaxEffect = 0.600000;
            nightShiftLuminanceScale = 600;
        };

        class Lighting: DefaultLighting {
            groundReflection = {
                0.132000,
                0.133000,
                0.122000
            };
            moonObjectColorFull = {
                460,
                440,
                400,
                1.000000
            };
            moonHaloObjectColorFull = {
                465,
                477,
                475,
                1.000000
            };
            moonsetObjectColor = {
                375,
                350,
                325,
                1.000000
            };
            moonsetHaloObjectColor = {
                515,
                517,
                525,
                1.000000
            };

            class ThunderBoltLight {
                diffuse = {
                    2120,
                    3170,
                    5550
                };
                ambient = {
                    0.001000,
                    0.001000,
                    0.001000
                };
                intensity = 120000;

                class Attenuation {
                    start = 0.000000;
                    constant = 0.000000;
                    linear = 0.000000;
                    quadratic = 1.000000;
                };
            };
            starEmissivity = 25;
        };

        class DayLightingBrightAlmost: DayLightingBrightAlmost {
            deepNight = {-15,
                {
                    0.005000,
                    0.010000,
                    0.010000
                },
                {
                    0.000000,
                    0.002000,
                    0.003000
                },
                {
                    0.000000,
                    0.000000,
                    0.000000
                },
                {
                    0.000000,
                    0.000000,
                    0.000000
                },
                {
                    0.000000,
                    0.002000,
                    0.003000
                },
                {
                    0.000000,
                    0.002000,
                    0.003000
                },
                0
            };
            fullNight = {-5,
                {
                    0.182000,
                    0.213000,
                    0.250000
                },
                {
                    0.050000,
                    0.111000,
                    0.221000
                },
                {
                    0.040000,
                    0.034000,
                    0.004000
                },
                {
                    0.039000,
                    0.049000,
                    0.072000
                },
                {
                    0.082000,
                    0.128000,
                    0.185000
                },
                {
                    0.283000,
                    0.350000,
                    0.431000
                },
                0
            };
            sunMoon = {-3.750000,
                {
                    0.377000,
                    0.441000,
                    0.518000
                },
                {
                    0.103000,
                    0.227000,
                    0.453000
                },
                {
                    0.040000,
                    0.034000,
                    0.004000
                },
                {
                    0.039000,
                    0.049000,
                    0.072000
                },
                {
                    0.174000,
                    0.274000,
                    0.395000
                },
                {
                    0.582000,
                    0.720000,
                    0.887000
                },
                0.500000
            };
            earlySun = {-2.500000,
                {
                    0.675000,
                    0.690000,
                    0.784000
                },
                {
                    0.220000,
                    0.322000,
                    0.471000
                },
                {
                    0.040000,
                    0.034000,
                    0.004000
                },
                {
                    0.039000,
                    0.049000,
                    0.072000
                },
                {
                    0.424000,
                    0.549000,
                    0.745000
                },
                {
                    0.698000,
                    0.753000,
                    0.894000
                },
                1
            };
            sunrise = {
                0,
                {
                    0.675000,
                    0.690000,
                    0.784000
                },
                {
                    0.478000,
                    0.510000,
                    0.659000
                },
                {
                    0.200000,
                    0.190000,
                    0.070000
                },
                {
                    0.124000,
                    0.161000,
                    0.236000
                },
                {
                    {
                        0.847000,
                        0.855000,
                        0.965000
                    },
                    0.200000
                },
                {
                    {
                        0.933000,
                        0.949000,
                        0.996000
                    },
                    2
                },
                1
            };
            earlyMorning = {
                3,
                {
                    {
                        0.844000,
                        0.610000,
                        0.469000
                    },
                    0.800000
                },
                {
                    0.424000,
                    0.557000,
                    0.651000
                },
                {
                    {
                        1,
                        0.450000,
                        0.200000
                    },
                    1
                },
                {
                    0.120000,
                    0.260000,
                    0.380000
                },
                {
                    {
                        0.428000,
                        0.579000,
                        0.743000
                    },
                    2
                },
                {
                    {
                        0.844000,
                        0.610000,
                        0.469000
                    },
                    2.700000
                },
                1
            };
            midMorning = {
                8,
                {
                    {
                        0.822000,
                        0.750000,
                        0.646000
                    },
                    3.800000
                },
                {
                    {
                        0.383000,
                        0.580000,
                        0.858000
                    },
                    1.300000
                },
                {
                    {
                        1.300000,
                        0.900000,
                        0.610000
                    },
                    2.800000
                },
                {
                    {
                        0.120000,
                        0.180000,
                        0.280000
                    },
                    0.500000
                },
                {
                    {
                        0.322000,
                        0.478000,
                        0.675000
                    },
                    3.500000
                },
                {
                    {
                        1.000000,
                        0.929000,
                        0.815000
                    },
                    4.700000
                },
                1
            };
            morning = {
                16,
                {
                    {
                        1,
                        0.950000,
                        0.910000
                    },
                    12.200000
                },
                {
                    {
                        0.120000,
                        0.180000,
                        0.280000
                    },
                    9.200000
                },
                {
                    {
                        1,
                        0.950000,
                        0.910000
                    },
                    11.200000
                },
                {
                    {
                        0.120000,
                        0.180000,
                        0.280000
                    },
                    8.500000
                },
                {
                    {
                        0.140000,
                        0.180000,
                        0.240000
                    },
                    11.000000
                },
                {
                    {
                        0.500000,
                        0.600000,
                        0.900000
                    },
                    13.200000
                },
                1
            };
            noon = {
                45,
                {
                    {
                        0.980000,
                        0.940000,
                        0.940000
                    },
                    13.800000
                },
                {
                    {
                        0.200000,
                        0.270000,
                        0.350000
                    },
                    10.800000
                },
                {
                    {
                        0.980000,
                        0.940000,
                        0.940000
                    },
                    13.800000
                },
                {
                    {
                        0.200000,
                        0.270000,
                        0.350000
                    },
                    10.800000
                },
                {
                    {
                        0.500000,
                        0.640000,
                        1.000000
                    },
                    12.000000
                },
                {
                    {
                        0.500000,
                        0.500000,
                        0.500000
                    },
                    14.800000
                },
                1,
                0.500000,
                0.400000,
                0.500000,
                0.400000
            };
        };

        class DayLightingRainy: DayLightingRainy {
            deepNight = {-15,
                {
                    0.005000,
                    0.010000,
                    0.010000
                },
                {
                    0.000000,
                    0.002000,
                    0.003000
                },
                {
                    0.000000,
                    0.000000,
                    0.000000
                },
                {
                    0.000000,
                    0.000000,
                    0.000000
                },
                {
                    0.000000,
                    0.002000,
                    0.003000
                },
                {
                    0.000000,
                    0.002000,
                    0.003000
                },
                0
            };
            fullNight = {-5,
                {
                    0.023000,
                    0.023000,
                    0.023000
                },
                {
                    0.020000,
                    0.020000,
                    0.020000
                },
                {
                    0.023000,
                    0.023000,
                    0.023000
                },
                {
                    0.020000,
                    0.020000,
                    0.020000
                },
                {
                    0.010000,
                    0.010000,
                    0.020000
                },
                {
                    0.080000,
                    0.060000,
                    0.060000
                },
                0
            };
            sunMoon = {-3.750000,
                {
                    0.040000,
                    0.040000,
                    0.050000
                },
                {
                    0.040000,
                    0.040000,
                    0.050000
                },
                {
                    0.040000,
                    0.040000,
                    0.050000
                },
                {
                    0.040000,
                    0.040000,
                    0.050000
                },
                {
                    0.040000,
                    0.035000,
                    0.040000
                },
                {
                    0.110000,
                    0.080000,
                    0.090000
                },
                0.500000
            };
            earlySun = {-2.500000,
                {
                    0.068900,
                    0.068900,
                    0.080400
                },
                {
                    0.060000,
                    0.060000,
                    0.070000
                },
                {
                    0.068900,
                    0.068900,
                    0.080400
                },
                {
                    0.060000,
                    0.060000,
                    0.070000
                },
                {
                    0.080000,
                    0.070000,
                    0.080000
                },
                {
                    0.140000,
                    0.100000,
                    0.120000
                },
                0.500000
            };
            earlyMorning = {
                3,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.5"
                },
                1
            };
            morning = {
                16,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+8"
                },
                1
            };
            lateMorning = {
                25,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12.75"
                },
                1
            };
            noon = {
                45,
                {
                    {
                        1,
                        1,
                        1
                    },
                    10.000000
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.000000
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.000000
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    8.000000
                },
                {
                    {
                        0.500000,
                        0.640000,
                        1
                    },
                    12.000000
                },
                {
                    {
                        0.500000,
                        0.500000,
                        0.500000
                    },
                    14.800000
                },
                1
            };
        };

        class Weather: Weather {

            class LightingNew {

                class Lighting0 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse = {
                        {
                            0.140000,
                            0.190000,
                            0.300000
                        },
                        4
                    };
                    diffuseCloud = {
                        {
                            0.140000,
                            0.190000,
                            0.300000
                        },
                        0.200000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.050000
                    };
                    ambientMid = {
                        {
                            0.138400,
                            0.191200,
                            0.298400
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.138400,
                            0.191200,
                            0.298400
                        },
                        0.044000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.042240
                    };
                    bidirect = {
                        0.025000,
                        0.025000,
                        0.023000
                    };
                    bidirectCloud = {
                        0.012500,
                        0.012500,
                        0.011500
                    };
                    sky = {
                        0.231000,
                        0.314000,
                        0.467000
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            0.500000,
                            0.650000,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting1 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    diffuseCloud = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        {
                            0.094000,
                            0.141000,
                            0.231000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting2 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = -11;
                    sunOrMoon = 0.500000;
                    diffuse = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    diffuseCloud = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        {
                            0.094000,
                            0.141000,
                            0.231000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting3 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    diffuseCloud = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        {
                            0.200000,
                            0.250000,
                            0.450000
                        },
                        4.734908
                    };
                    fogColor = {
                        {
                            0.094000,
                            0.141000,
                            0.231000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting4 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.160000,
                            0.180000,
                            0.280000
                        },
                        3
                    };
                    diffuseCloud = {
                        {
                            0.160000,
                            0.180000,
                            0.280000
                        },
                        3
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.600000
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.600000
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.048000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.048000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        3.886080
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        3.886080
                    };
                    bidirect = {
                        0.011500,
                        0.012000,
                        0.012500
                    };
                    bidirectCloud = {
                        0.011500,
                        0.012000,
                        0.012500
                    };
                    sky = {
                        {
                            0.200000,
                            0.298000,
                            0.541000
                        },
                        4.600000
                    };
                    skyAroundSun = {
                        {
                            0.700000,
                            0.350000,
                            0.280000
                        },
                        7.636949
                    };
                    fogColor = {
                        {
                            0.106000,
                            0.161000,
                            0.267000
                        },
                        4.715000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting5 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.250000,
                            0.210000,
                            0.200000
                        },
                        5
                    };
                    diffuseCloud = {
                        {
                            0.250000,
                            0.210000,
                            0.200000
                        },
                        5
                    };
                    ambient = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.900000
                    };
                    ambientCloud = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.900000
                    };
                    ambientMid = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.072000
                    };
                    ambientMidCloud = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.072000
                    };
                    groundReflection = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        5.829120
                    };
                    groundReflectionCloud = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        5.829120
                    };
                    bidirect = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    bidirectCloud = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    sky = {
                        {
                            0.188000,
                            0.290000,
                            0.576000
                        },
                        6.900000
                    };
                    skyAroundSun = {
                        {
                            1.800000,
                            0.420000,
                            0.200000
                        },
                        12.317660
                    };
                    fogColor = {
                        {
                            0.110000,
                            0.169000,
                            0.286000
                        },
                        7.072500
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting6 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.750000,
                            0.380000,
                            0.220000
                        },
                        6
                    };
                    diffuseCloud = {
                        {
                            0.750000,
                            0.380000,
                            0.220000
                        },
                        6
                    };
                    ambient = {
                        {
                            0.249700,
                            0.310000,
                            0.467000
                        },
                        7.800000
                    };
                    ambientCloud = {
                        {
                            0.249700,
                            0.310000,
                            0.467000
                        },
                        7.800000
                    };
                    ambientMid = {
                        {
                            0.254100,
                            0.314000,
                            0.467000
                        },
                        6.864000
                    };
                    ambientMidCloud = {
                        {
                            0.254100,
                            0.314000,
                            0.467000
                        },
                        6.864000
                    };
                    groundReflection = {
                        {
                            0.235000,
                            0.318000,
                            0.467000
                        },
                        6.589440
                    };
                    groundReflectionCloud = {
                        {
                            0.235000,
                            0.318000,
                            0.467000
                        },
                        6.589440
                    };
                    bidirect = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    bidirectCloud = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    sky = {
                        {
                            0.173000,
                            0.282000,
                            0.612000
                        },
                        7.800000
                    };
                    skyAroundSun = {
                        {
                            2,
                            0.420000,
                            0.200000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.118000,
                            0.180000,
                            0.310000
                        },
                        7.995000
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting7 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.950000,
                            0.420000,
                            0.220000
                        },
                        8.400000
                    };
                    diffuseCloud = {
                        {
                            0.950000,
                            0.420000,
                            0.220000
                        },
                        8.400000
                    };
                    ambient = {
                        {
                            0.306000,
                            0.357000,
                            0.463000
                        },
                        8.400000
                    };
                    ambientCloud = {
                        {
                            0.306000,
                            0.357000,
                            0.463000
                        },
                        8.400000
                    };
                    ambientMid = {
                        {
                            0.365000,
                            0.361000,
                            0.396000
                        },
                        7.392000
                    };
                    ambientMidCloud = {
                        {
                            0.365000,
                            0.361000,
                            0.396000
                        },
                        7.392000
                    };
                    groundReflection = {
                        {
                            0.416000,
                            0.380000,
                            0.388000
                        },
                        7.096320
                    };
                    groundReflectionCloud = {
                        {
                            0.416000,
                            0.380000,
                            0.388000
                        },
                        7.096320
                    };
                    bidirect = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    bidirectCloud = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    sky = {
                        {
                            0.157000,
                            0.275000,
                            0.651000
                        },
                        8.400000
                    };
                    skyAroundSun = {
                        {
                            2.200000,
                            0.800000,
                            0.200000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.125000,
                            0.192000,
                            0.329000
                        },
                        8.610000
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting8 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.950000,
                            0.550000,
                            0.350000
                        },
                        10.200000
                    };
                    diffuseCloud = {
                        {
                            0.950000,
                            0.550000,
                            0.350000
                        },
                        10.200000
                    };
                    ambient = {
                        {
                            0.337000,
                            0.404000,
                            0.525000
                        },
                        9.600000
                    };
                    ambientCloud = {
                        {
                            0.337000,
                            0.404000,
                            0.525000
                        },
                        9.600000
                    };
                    ambientMid = {
                        {
                            0.412000,
                            0.408000,
                            0.443000
                        },
                        8.448000
                    };
                    ambientMidCloud = {
                        {
                            0.412000,
                            0.408000,
                            0.443000
                        },
                        8.448000
                    };
                    groundReflection = {
                        {
                            0.475000,
                            0.435000,
                            0.431000
                        },
                        8.110080
                    };
                    groundReflectionCloud = {
                        {
                            0.475000,
                            0.435000,
                            0.431000
                        },
                        8.110080
                    };
                    bidirect = {
                        0.013750,
                        0.013200,
                        0.012650
                    };
                    bidirectCloud = {
                        0.013750,
                        0.013200,
                        0.012650
                    };
                    sky = {
                        {
                            0.145000,
                            0.263000,
                            0.686000
                        },
                        9.600000
                    };
                    skyAroundSun = {
                        {
                            0.400000,
                            0.320000,
                            0.600000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.133000,
                            0.204000,
                            0.357000
                        },
                        9.840000
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.027000,
                        0.045000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting9 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.650000,
                            0.450000
                        },
                        12.300000
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.650000,
                            0.450000
                        },
                        12.300000
                    };
                    ambient = {
                        {
                            0.388000,
                            0.471000,
                            0.612000
                        },
                        10.900000
                    };
                    ambientCloud = {
                        {
                            0.388000,
                            0.471000,
                            0.612000
                        },
                        10.900000
                    };
                    ambientMid = {
                        {
                            0.482000,
                            0.475000,
                            0.506000
                        },
                        9.810000
                    };
                    ambientMidCloud = {
                        {
                            0.482000,
                            0.475000,
                            0.506000
                        },
                        9.810000
                    };
                    groundReflection = {
                        {
                            0.557000,
                            0.510000,
                            0.494000
                        },
                        9.417600
                    };
                    groundReflectionCloud = {
                        {
                            0.557000,
                            0.510000,
                            0.494000
                        },
                        9.417600
                    };
                    bidirect = {
                        0.018750,
                        0.018000,
                        0.017250
                    };
                    bidirectCloud = {
                        0.018750,
                        0.018000,
                        0.017250
                    };
                    sky = {
                        {
                            0.129000,
                            0.259000,
                            0.722000
                        },
                        10.900000
                    };
                    skyAroundSun = {
                        {
                            0.130000,
                            0.250000,
                            0.800000
                        },
                        13.524000
                    };
                    fogColor = {
                        {
                            0.145000,
                            0.224000,
                            0.396000
                        },
                        11.172500
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.018000,
                        0.040000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        12.240000
                    };
                    swBrightness = 1;
                };

                class Lighting10 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.750000,
                            0.620000
                        },
                        15.800000
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.750000,
                            0.620000
                        },
                        15.800000
                    };
                    ambient = {
                        {
                            0.435000,
                            0.533000,
                            0.698000
                        },
                        13.800000
                    };
                    ambientCloud = {
                        {
                            0.435000,
                            0.533000,
                            0.698000
                        },
                        13.800000
                    };
                    ambientMid = {
                        {
                            0.545000,
                            0.541000,
                            0.569000
                        },
                        12.696000
                    };
                    ambientMidCloud = {
                        {
                            0.545000,
                            0.541000,
                            0.569000
                        },
                        12.696000
                    };
                    groundReflection = {
                        {
                            0.635000,
                            0.580000,
                            0.557000
                        },
                        12.188160
                    };
                    groundReflectionCloud = {
                        {
                            0.635000,
                            0.580000,
                            0.557000
                        },
                        12.188160
                    };
                    bidirect = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    bidirectCloud = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    sky = {
                        {
                            0.118000,
                            0.251000,
                            0.753000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.115000,
                            0.245000,
                            0.800000
                        },
                        13.662000
                    };
                    fogColor = {
                        {
                            0.150000,
                            0.251000,
                            0.488000
                        },
                        14.145000
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.400000
                    };
                    swBrightness = 1;
                };

                class Lighting11 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        17.200001
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        17.200001
                    };
                    ambient = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientCloud = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientMid = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        14.504000
                    };
                    ambientMidCloud = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        14.504000
                    };
                    groundReflection = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    groundReflectionCloud = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    bidirect = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    bidirectCloud = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    sky = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.300000,
                            0.440000,
                            0.740000
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting12 {
                    height = 0;
                    overcast = 0.250000;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        17.200001
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        17.200001
                    };
                    ambient = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientCloud = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientMid = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        14.504000
                    };
                    ambientMidCloud = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        14.504000
                    };
                    groundReflection = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    groundReflectionCloud = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    bidirect = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    bidirectCloud = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    sky = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.300000,
                            0.440000,
                            0.740000
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting13 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse = {
                        {
                            0.140000,
                            0.190000,
                            0.300000
                        },
                        4
                    };
                    diffuseCloud = {
                        {
                            0.140000,
                            0.190000,
                            0.300000
                        },
                        3
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.138400,
                            0.191200,
                            0.298400
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.138400,
                            0.191200,
                            0.298400
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0.025000,
                        0.025000,
                        0.023000
                    };
                    bidirectCloud = {
                        0.024500,
                        0.024500,
                        0.022540
                    };
                    sky = {
                        0.231000,
                        0.314000,
                        0.467000
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            0.500000,
                            0.650000,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting14 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    diffuseCloud = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        {
                            0.094000,
                            0.141000,
                            0.231000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting15 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = -11;
                    sunOrMoon = 0.500000;
                    diffuse = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    diffuseCloud = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        {
                            0.094000,
                            0.141000,
                            0.231000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting16 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    diffuseCloud = {
                        0.100000,
                        0.180000,
                        0.300000
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.880000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.844800
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        {
                            0.200000,
                            0.250000,
                            0.450000
                        },
                        4.734908
                    };
                    fogColor = {
                        {
                            0.094000,
                            0.141000,
                            0.231000
                        },
                        0.025000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting17 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.160000,
                            0.180000,
                            0.280000
                        },
                        2.250000
                    };
                    diffuseCloud = {
                        {
                            0.160000,
                            0.180000,
                            0.280000
                        },
                        1.687500
                    };
                    ambient = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.600000
                    };
                    ambientCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.600000
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.048000
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        4.048000
                    };
                    groundReflection = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        3.886080
                    };
                    groundReflectionCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        3.886080
                    };
                    bidirect = {
                        0.011500,
                        0.012000,
                        0.012500
                    };
                    bidirectCloud = {
                        0.011270,
                        0.011760,
                        0.012250
                    };
                    sky = {
                        {
                            0.200000,
                            0.298000,
                            0.541000
                        },
                        4.600000
                    };
                    skyAroundSun = {
                        {
                            0.700000,
                            0.350000,
                            0.280000
                        },
                        7.636949
                    };
                    fogColor = {
                        {
                            0.106000,
                            0.161000,
                            0.267000
                        },
                        4.715000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting18 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.250000,
                            0.210000,
                            0.200000
                        },
                        3.750000
                    };
                    diffuseCloud = {
                        {
                            0.250000,
                            0.210000,
                            0.200000
                        },
                        2.812500
                    };
                    ambient = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.900000
                    };
                    ambientCloud = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.900000
                    };
                    ambientMid = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.072000
                    };
                    ambientMidCloud = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        6.072000
                    };
                    groundReflection = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        5.829120
                    };
                    groundReflectionCloud = {
                        {
                            0.196000,
                            0.275000,
                            0.420000
                        },
                        5.829120
                    };
                    bidirect = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    bidirectCloud = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    sky = {
                        {
                            0.188000,
                            0.290000,
                            0.576000
                        },
                        6.900000
                    };
                    skyAroundSun = {
                        {
                            1.800000,
                            0.420000,
                            0.200000
                        },
                        12.317660
                    };
                    fogColor = {
                        {
                            0.110000,
                            0.169000,
                            0.286000
                        },
                        7.072500
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting19 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.750000,
                            0.380000,
                            0.220000
                        },
                        4.500000
                    };
                    diffuseCloud = {
                        {
                            0.750000,
                            0.380000,
                            0.220000
                        },
                        3.375000
                    };
                    ambient = {
                        {
                            0.249700,
                            0.310000,
                            0.467000
                        },
                        7.800000
                    };
                    ambientCloud = {
                        {
                            0.249700,
                            0.310000,
                            0.467000
                        },
                        7.800000
                    };
                    ambientMid = {
                        {
                            0.254100,
                            0.314000,
                            0.467000
                        },
                        6.864000
                    };
                    ambientMidCloud = {
                        {
                            0.254100,
                            0.314000,
                            0.467000
                        },
                        6.864000
                    };
                    groundReflection = {
                        {
                            0.235000,
                            0.318000,
                            0.467000
                        },
                        6.589440
                    };
                    groundReflectionCloud = {
                        {
                            0.235000,
                            0.318000,
                            0.467000
                        },
                        6.589440
                    };
                    bidirect = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    bidirectCloud = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    sky = {
                        {
                            0.173000,
                            0.282000,
                            0.612000
                        },
                        7.800000
                    };
                    skyAroundSun = {
                        {
                            2,
                            0.420000,
                            0.200000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.118000,
                            0.180000,
                            0.310000
                        },
                        7.995000
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting20 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.950000,
                            0.420000,
                            0.220000
                        },
                        6.720000
                    };
                    diffuseCloud = {
                        {
                            0.950000,
                            0.420000,
                            0.220000
                        },
                        5.040000
                    };
                    ambient = {
                        {
                            0.306000,
                            0.357000,
                            0.463000
                        },
                        8.400000
                    };
                    ambientCloud = {
                        {
                            0.306000,
                            0.357000,
                            0.463000
                        },
                        8.400000
                    };
                    ambientMid = {
                        {
                            0.365000,
                            0.361000,
                            0.396000
                        },
                        7.392000
                    };
                    ambientMidCloud = {
                        {
                            0.365000,
                            0.361000,
                            0.396000
                        },
                        7.392000
                    };
                    groundReflection = {
                        {
                            0.416000,
                            0.380000,
                            0.388000
                        },
                        7.096320
                    };
                    groundReflectionCloud = {
                        {
                            0.416000,
                            0.380000,
                            0.388000
                        },
                        7.096320
                    };
                    bidirect = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    bidirectCloud = {
                        0.023000,
                        0.024000,
                        0.025000
                    };
                    sky = {
                        {
                            0.157000,
                            0.275000,
                            0.651000
                        },
                        8.400000
                    };
                    skyAroundSun = {
                        {
                            2.200000,
                            0.800000,
                            0.200000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.125000,
                            0.192000,
                            0.329000
                        },
                        8.610000
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting21 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.950000,
                            0.550000,
                            0.350000
                        },
                        10.200000
                    };
                    diffuseCloud = {
                        {
                            0.950000,
                            0.550000,
                            0.350000
                        },
                        7.650000
                    };
                    ambient = {
                        {
                            0.337000,
                            0.404000,
                            0.525000
                        },
                        9.600000
                    };
                    ambientCloud = {
                        {
                            0.337000,
                            0.404000,
                            0.525000
                        },
                        9.600000
                    };
                    ambientMid = {
                        {
                            0.412000,
                            0.408000,
                            0.443000
                        },
                        8.448000
                    };
                    ambientMidCloud = {
                        {
                            0.412000,
                            0.408000,
                            0.443000
                        },
                        8.448000
                    };
                    groundReflection = {
                        {
                            0.475000,
                            0.435000,
                            0.431000
                        },
                        8.110080
                    };
                    groundReflectionCloud = {
                        {
                            0.475000,
                            0.435000,
                            0.431000
                        },
                        8.110080
                    };
                    bidirect = {
                        0.013750,
                        0.013200,
                        0.012650
                    };
                    bidirectCloud = {
                        0.013750,
                        0.013200,
                        0.012650
                    };
                    sky = {
                        {
                            0.145000,
                            0.263000,
                            0.686000
                        },
                        9.600000
                    };
                    skyAroundSun = {
                        {
                            0.400000,
                            0.320000,
                            0.600000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.133000,
                            0.204000,
                            0.357000
                        },
                        9.840000
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.027000,
                        0.045000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting22 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.650000,
                            0.450000
                        },
                        12.300000
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.650000,
                            0.450000
                        },
                        9.225000
                    };
                    ambient = {
                        {
                            0.388000,
                            0.471000,
                            0.612000
                        },
                        10.900000
                    };
                    ambientCloud = {
                        {
                            0.388000,
                            0.471000,
                            0.612000
                        },
                        10.900000
                    };
                    ambientMid = {
                        {
                            0.482000,
                            0.475000,
                            0.506000
                        },
                        9.810000
                    };
                    ambientMidCloud = {
                        {
                            0.482000,
                            0.475000,
                            0.506000
                        },
                        9.810000
                    };
                    groundReflection = {
                        {
                            0.557000,
                            0.510000,
                            0.494000
                        },
                        9.417600
                    };
                    groundReflectionCloud = {
                        {
                            0.557000,
                            0.510000,
                            0.494000
                        },
                        9.417600
                    };
                    bidirect = {
                        0.018750,
                        0.018000,
                        0.017250
                    };
                    bidirectCloud = {
                        0.018750,
                        0.018000,
                        0.017250
                    };
                    sky = {
                        {
                            0.129000,
                            0.259000,
                            0.722000
                        },
                        10.900000
                    };
                    skyAroundSun = {
                        {
                            0.130000,
                            0.250000,
                            0.800000
                        },
                        13.524000
                    };
                    fogColor = {
                        {
                            0.145000,
                            0.224000,
                            0.396000
                        },
                        11.172500
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.018000,
                        0.040000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        12.240000
                    };
                    swBrightness = 1;
                };

                class Lighting23 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.750000,
                            0.620000
                        },
                        15.800000
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.750000,
                            0.620000
                        },
                        11.850000
                    };
                    ambient = {
                        {
                            0.435000,
                            0.533000,
                            0.698000
                        },
                        13.800000
                    };
                    ambientCloud = {
                        {
                            0.435000,
                            0.533000,
                            0.698000
                        },
                        13.800000
                    };
                    ambientMid = {
                        {
                            0.545000,
                            0.541000,
                            0.569000
                        },
                        12.696000
                    };
                    ambientMidCloud = {
                        {
                            0.545000,
                            0.541000,
                            0.569000
                        },
                        12.696000
                    };
                    groundReflection = {
                        {
                            0.635000,
                            0.580000,
                            0.557000
                        },
                        12.188160
                    };
                    groundReflectionCloud = {
                        {
                            0.635000,
                            0.580000,
                            0.557000
                        },
                        12.188160
                    };
                    bidirect = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    bidirectCloud = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    sky = {
                        {
                            0.118000,
                            0.251000,
                            0.753000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.115000,
                            0.245000,
                            0.800000
                        },
                        13.662000
                    };
                    fogColor = {
                        {
                            0.150000,
                            0.251000,
                            0.488000
                        },
                        14.145000
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.400000
                    };
                    swBrightness = 1;
                };

                class Lighting24 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        17
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        12.750000
                    };
                    ambient = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientCloud = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientMid = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        13.616000
                    };
                    ambientMidCloud = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        13.616000
                    };
                    groundReflection = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    groundReflectionCloud = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    bidirect = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    bidirectCloud = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    sky = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.300000,
                            0.440000,
                            0.740000
                        },
                        13.956400
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting25 {
                    height = 0;
                    overcast = 0.600000;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        17
                    };
                    diffuseCloud = {
                        {
                            1,
                            0.870000,
                            0.850000
                        },
                        13.940000
                    };
                    ambient = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientCloud = {
                        {
                            0.498000,
                            0.602000,
                            0.770000
                        },
                        14.800000
                    };
                    ambientMid = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        14.504000
                    };
                    ambientMidCloud = {
                        {
                            0.635000,
                            0.635000,
                            0.663000
                        },
                        14.504000
                    };
                    groundReflection = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    groundReflectionCloud = {
                        {
                            0.745000,
                            0.671000,
                            0.643000
                        },
                        14.213920
                    };
                    bidirect = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    bidirectCloud = {
                        0.025000,
                        0.024000,
                        0.018000
                    };
                    sky = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.300000,
                            0.440000,
                            0.740000
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting26 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        1
                    };
                    diffuseCloud = {
                        {
                            0,
                            0,
                            0
                        },
                        0.750000
                    };
                    ambient = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.862400
                    };
                    ambientMidCloud = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.862400
                    };
                    groundReflection = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.758912
                    };
                    groundReflectionCloud = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.758912
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        0.231000,
                        0.314000,
                        0.467000
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        0.090000,
                        0.137000,
                        0.220000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting27 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse = {
                        0.169540,
                        0.239000,
                        0.376730
                    };
                    diffuseCloud = {
                        0.042385,
                        0.059750,
                        0.094183
                    };
                    ambient = {
                        {
                            0.169540,
                            0.239000,
                            0.376730
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.169540,
                            0.239000,
                            0.376730
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.862400
                    };
                    ambientMidCloud = {
                        {
                            0.173000,
                            0.239000,
                            0.373000
                        },
                        0.862400
                    };
                    groundReflection = {
                        {
                            0.147050,
                            0.203150,
                            0.317050
                        },
                        0.758912
                    };
                    groundReflectionCloud = {
                        {
                            0.147050,
                            0.203150,
                            0.317050
                        },
                        0.758912
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        0.122000,
                        0.169000,
                        0.255000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting28 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = -11;
                    sunOrMoon = 0.500000;
                    diffuse = {
                        0.129000,
                        0.180000,
                        0.271000
                    };
                    diffuseCloud = {
                        0.032250,
                        0.045000,
                        0.067750
                    };
                    ambient = {
                        {
                            0.129000,
                            0.180000,
                            0.271000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.129000,
                            0.180000,
                            0.271000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.129000,
                            0.184000,
                            0.267000
                        },
                        0.862400
                    };
                    ambientMidCloud = {
                        {
                            0.129000,
                            0.184000,
                            0.267000
                        },
                        0.862400
                    };
                    groundReflection = {
                        {
                            0.125000,
                            0.176000,
                            0.263000
                        },
                        0.758912
                    };
                    groundReflectionCloud = {
                        {
                            0.125000,
                            0.176000,
                            0.263000
                        },
                        0.758912
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        0.200000,
                        0.250000,
                        0.450000
                    };
                    fogColor = {
                        0.122000,
                        0.169000,
                        0.255000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting29 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse = {
                        0.129000,
                        0.180000,
                        0.271000
                    };
                    diffuseCloud = {
                        0.032250,
                        0.045000,
                        0.067750
                    };
                    ambient = {
                        {
                            0.129000,
                            0.180000,
                            0.271000
                        },
                        1
                    };
                    ambientCloud = {
                        {
                            0.129000,
                            0.180000,
                            0.271000
                        },
                        1
                    };
                    ambientMid = {
                        {
                            0.129000,
                            0.184000,
                            0.267000
                        },
                        0.862400
                    };
                    ambientMidCloud = {
                        {
                            0.129000,
                            0.184000,
                            0.267000
                        },
                        0.862400
                    };
                    groundReflection = {
                        {
                            0.125000,
                            0.176000,
                            0.263000
                        },
                        0.758912
                    };
                    groundReflectionCloud = {
                        {
                            0.125000,
                            0.176000,
                            0.263000
                        },
                        0.758912
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.212000,
                            0.302000,
                            0.510000
                        },
                        1
                    };
                    skyAroundSun = {
                        {
                            0.200000,
                            0.250000,
                            0.450000
                        },
                        4.734908
                    };
                    fogColor = {
                        0.122000,
                        0.169000,
                        0.255000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting30 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.157000,
                            0.212000,
                            0.306000
                        },
                        0.562500
                    };
                    diffuseCloud = {
                        {
                            0.039250,
                            0.053000,
                            0.076500
                        },
                        0.393750
                    };
                    ambient = {
                        {
                            0.157000,
                            0.212000,
                            0.306000
                        },
                        3.220000
                    };
                    ambientCloud = {
                        {
                            0.157000,
                            0.212000,
                            0.306000
                        },
                        3.220000
                    };
                    ambientMid = {
                        {
                            0.157000,
                            0.208000,
                            0.298000
                        },
                        3.967040
                    };
                    ambientMidCloud = {
                        {
                            0.157000,
                            0.208000,
                            0.298000
                        },
                        3.967040
                    };
                    groundReflection = {
                        {
                            0.149000,
                            0.204000,
                            0.290000
                        },
                        3.649677
                    };
                    groundReflectionCloud = {
                        {
                            0.149000,
                            0.204000,
                            0.290000
                        },
                        3.649677
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.200000,
                            0.298000,
                            0.541000
                        },
                        4.600000
                    };
                    skyAroundSun = {
                        {
                            0.700000,
                            0.350000,
                            0.280000
                        },
                        7.636949
                    };
                    fogColor = {
                        {
                            0.141000,
                            0.192000,
                            0.282000
                        },
                        3.967040
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting31 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.184000,
                            0.247000,
                            0.341000
                        },
                        0.937500
                    };
                    diffuseCloud = {
                        {
                            0.046000,
                            0.061750,
                            0.085250
                        },
                        0.656250
                    };
                    ambient = {
                        {
                            0.184000,
                            0.247000,
                            0.341000
                        },
                        6.900000
                    };
                    ambientCloud = {
                        {
                            0.184000,
                            0.247000,
                            0.341000
                        },
                        6.900000
                    };
                    ambientMid = {
                        {
                            0.184000,
                            0.243000,
                            0.329000
                        },
                        5.950560
                    };
                    ambientMidCloud = {
                        {
                            0.184000,
                            0.243000,
                            0.329000
                        },
                        5.950560
                    };
                    groundReflection = {
                        {
                            0.176000,
                            0.231000,
                            0.322000
                        },
                        5.593526
                    };
                    groundReflectionCloud = {
                        {
                            0.176000,
                            0.231000,
                            0.322000
                        },
                        5.593526
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.188000,
                            0.290000,
                            0.576000
                        },
                        6.900000
                    };
                    skyAroundSun = {
                        {
                            1.800000,
                            0.420000,
                            0.200000
                        },
                        12.317660
                    };
                    fogColor = {
                        {
                            0.165000,
                            0.220000,
                            0.310000
                        },
                        5.950560
                    };
                    apertureMin = 7;
                    apertureStandard = 7;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting32 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.216000,
                            0.286000,
                            0.384000
                        },
                        1.125000
                    };
                    diffuseCloud = {
                        {
                            0.054000,
                            0.071500,
                            0.096000
                        },
                        0.787500
                    };
                    ambient = {
                        {
                            0.216000,
                            0.286000,
                            0.384000
                        },
                        7.800000
                    };
                    ambientCloud = {
                        {
                            0.216000,
                            0.286000,
                            0.384000
                        },
                        7.800000
                    };
                    ambientMid = {
                        {
                            0.220000,
                            0.278000,
                            0.365000
                        },
                        6.726720
                    };
                    ambientMidCloud = {
                        {
                            0.220000,
                            0.278000,
                            0.365000
                        },
                        6.726720
                    };
                    groundReflection = {
                        {
                            0.204000,
                            0.267000,
                            0.353000
                        },
                        6.457651
                    };
                    groundReflectionCloud = {
                        {
                            0.204000,
                            0.267000,
                            0.353000
                        },
                        6.457651
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.173000,
                            0.282000,
                            0.612000
                        },
                        7.800000
                    };
                    skyAroundSun = {
                        {
                            2,
                            0.420000,
                            0.200000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.188000,
                            0.247000,
                            0.341000
                        },
                        6.726720
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting33 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.255000,
                            0.325000,
                            0.420000
                        },
                        1.680000
                    };
                    diffuseCloud = {
                        {
                            0.063750,
                            0.081250,
                            0.105000
                        },
                        1.176000
                    };
                    ambient = {
                        {
                            0.255000,
                            0.325000,
                            0.420000
                        },
                        8.400000
                    };
                    ambientCloud = {
                        {
                            0.255000,
                            0.325000,
                            0.420000
                        },
                        8.400000
                    };
                    ambientMid = {
                        {
                            0.259000,
                            0.314000,
                            0.396000
                        },
                        7.244160
                    };
                    ambientMidCloud = {
                        {
                            0.259000,
                            0.314000,
                            0.396000
                        },
                        7.244160
                    };
                    groundReflection = {
                        {
                            0.239000,
                            0.294000,
                            0.376000
                        },
                        7.099277
                    };
                    groundReflectionCloud = {
                        {
                            0.239000,
                            0.294000,
                            0.376000
                        },
                        7.099277
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.157000,
                            0.275000,
                            0.651000
                        },
                        8.400000
                    };
                    skyAroundSun = {
                        {
                            2.200000,
                            0.800000,
                            0.200000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.216000,
                            0.275000,
                            0.373000
                        },
                        7.244160
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting34 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.298000,
                            0.365000,
                            0.451000
                        },
                        2.550000
                    };
                    diffuseCloud = {
                        {
                            0.074500,
                            0.091250,
                            0.112750
                        },
                        1.785000
                    };
                    ambient = {
                        {
                            0.298000,
                            0.365000,
                            0.451000
                        },
                        9.600000
                    };
                    ambientCloud = {
                        {
                            0.298000,
                            0.365000,
                            0.451000
                        },
                        9.600000
                    };
                    ambientMid = {
                        {
                            0.302000,
                            0.349000,
                            0.416000
                        },
                        8.279040
                    };
                    ambientMidCloud = {
                        {
                            0.302000,
                            0.349000,
                            0.416000
                        },
                        8.279040
                    };
                    groundReflection = {
                        {
                            0.275000,
                            0.318000,
                            0.384000
                        },
                        8.113460
                    };
                    groundReflectionCloud = {
                        {
                            0.275000,
                            0.318000,
                            0.384000
                        },
                        8.113460
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.145000,
                            0.263000,
                            0.686000
                        },
                        9.600000
                    };
                    skyAroundSun = {
                        {
                            0.400000,
                            0.320000,
                            0.600000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.243000,
                            0.306000,
                            0.408000
                        },
                        8.279040
                    };
                    apertureMin = 8;
                    apertureStandard = 14;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.027000,
                        0.045000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting35 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.376000,
                            0.431000,
                            0.506000
                        },
                        3.075000
                    };
                    diffuseCloud = {
                        {
                            0.094000,
                            0.107750,
                            0.126500
                        },
                        2.152500
                    };
                    ambient = {
                        {
                            0.376000,
                            0.431000,
                            0.506000
                        },
                        10.900000
                    };
                    ambientCloud = {
                        {
                            0.376000,
                            0.431000,
                            0.506000
                        },
                        10.900000
                    };
                    ambientMid = {
                        {
                            0.380000,
                            0.408000,
                            0.447000
                        },
                        9.613800
                    };
                    ambientMidCloud = {
                        {
                            0.380000,
                            0.408000,
                            0.447000
                        },
                        9.613800
                    };
                    groundReflection = {
                        {
                            0.329000,
                            0.361000,
                            0.396000
                        },
                        9.421524
                    };
                    groundReflectionCloud = {
                        {
                            0.329000,
                            0.361000,
                            0.396000
                        },
                        9.421524
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.129000,
                            0.259000,
                            0.722000
                        },
                        10.900000
                    };
                    skyAroundSun = {
                        {
                            0.130000,
                            0.250000,
                            0.800000
                        },
                        13.524000
                    };
                    fogColor = {
                        {
                            0.286000,
                            0.353000,
                            0.463000
                        },
                        9.613800
                    };
                    apertureMin = 20;
                    apertureStandard = 22;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.018000,
                        0.040000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        12.240000
                    };
                    swBrightness = 1;
                };

                class Lighting36 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.447000,
                            0.494000,
                            0.557000
                        },
                        3.950000
                    };
                    diffuseCloud = {
                        {
                            0,
                            0,
                            0
                        },
                        2.765000
                    };
                    ambient = {
                        {
                            0.447000,
                            0.494000,
                            0.557000
                        },
                        13.800000
                    };
                    ambientCloud = {
                        {
                            0.447000,
                            0.494000,
                            0.557000
                        },
                        13.800000
                    };
                    ambientMid = {
                        {
                            0.455000,
                            0.467000,
                            0.475000
                        },
                        12.442080
                    };
                    ambientMidCloud = {
                        {
                            0.455000,
                            0.467000,
                            0.475000
                        },
                        12.442080
                    };
                    groundReflection = {
                        {
                            0.388000,
                            0.396000,
                            0.408000
                        },
                        12.193240
                    };
                    groundReflectionCloud = {
                        {
                            0.388000,
                            0.396000,
                            0.408000
                        },
                        12.193240
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.118000,
                            0.251000,
                            0.753000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.115000,
                            0.245000,
                            0.800000
                        },
                        13.662000
                    };
                    fogColor = {
                        {
                            0.333000,
                            0.404000,
                            0.518000
                        },
                        12.442080
                    };
                    apertureMin = 45;
                    apertureStandard = 50;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.400000
                    };
                    swBrightness = 1;
                };

                class Lighting37 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.506000,
                            0.553000,
                            0.608000
                        },
                        4.250000
                    };
                    diffuseCloud = {
                        0.126500,
                        0.138250,
                        0.152000
                    };
                    ambient = {
                        {
                            0.506000,
                            0.553000,
                            0.608000
                        },
                        14.800000
                    };
                    ambientCloud = {
                        {
                            0.506000,
                            0.553000,
                            0.608000
                        },
                        14.800000
                    };
                    ambientMid = {
                        {
                            0.514000,
                            0.518000,
                            0.514000
                        },
                        13.343680
                    };
                    ambientMidCloud = {
                        {
                            0.514000,
                            0.518000,
                            0.514000
                        },
                        13.343680
                    };
                    groundReflection = {
                        {
                            0.435000,
                            0.439000,
                            0.439000
                        },
                        13.076810
                    };
                    groundReflectionCloud = {
                        {
                            0.435000,
                            0.439000,
                            0.439000
                        },
                        13.076810
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.369000,
                            0.447000,
                            0.565000
                        },
                        13.343680
                    };
                    apertureMin = 70;
                    apertureStandard = 100;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting38 {
                    height = 0;
                    overcast = 0.850000;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.549000,
                            0.596000,
                            0.651000
                        },
                        4.250000
                    };
                    diffuseCloud = {
                        0.137250,
                        0.149000,
                        0.162750
                    };
                    ambient = {
                        {
                            0.549000,
                            0.596000,
                            0.651000
                        },
                        14.800000
                    };
                    ambientCloud = {
                        {
                            0.549000,
                            0.596000,
                            0.651000
                        },
                        14.800000
                    };
                    ambientMid = {
                        {
                            0.557000,
                            0.557000,
                            0.585000
                        },
                        14.213920
                    };
                    ambientMidCloud = {
                        {
                            0.557000,
                            0.557000,
                            0.585000
                        },
                        14.213920
                    };
                    groundReflection = {
                        {
                            0.471000,
                            0.471000,
                            0.463000
                        },
                        13.929640
                    };
                    groundReflectionCloud = {
                        {
                            0.471000,
                            0.471000,
                            0.463000
                        },
                        13.929640
                    };
                    bidirect = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    bidirectCloud = {
                        0.011700,
                        0.011700,
                        0.011700
                    };
                    sky = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0.020000,
                            0.120000,
                            0.800000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.400000,
                            0.480000,
                            0.600000
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 110;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.500000;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting39 {
                    height = -0.100000;
                    overcast = 0.800000;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        2.800000
                    };
                    diffuseCloud = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        2.800000
                    };
                    ambient = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        0.840000
                    };
                    ambientCloud = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        0.840000
                    };
                    ambientMid = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        0.907200
                    };
                    ambientMidCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        0.907200
                    };
                    groundReflection = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        0.870912
                    };
                    groundReflectionCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        0.870912
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        0,
                        0.235500,
                        0.233500
                    };
                    skyAroundSun = {
                        0,
                        0.235500,
                        0.233500
                    };
                    fogColor = {
                        {
                            0.090000,
                            0.137000,
                            0.220000
                        },
                        0.027500
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting40 {
                    height = -0.100000;
                    overcast = 0.800000;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        2.100000
                    };
                    diffuseCloud = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        2.100000
                    };
                    ambient = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        3.680000
                    };
                    ambientCloud = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        3.680000
                    };
                    ambientMid = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        3.974400
                    };
                    ambientMidCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        3.974400
                    };
                    groundReflection = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        3.815424
                    };
                    groundReflectionCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        3.815424
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0,
                            0.223500,
                            0.270500
                        },
                        4.232000
                    };
                    skyAroundSun = {
                        {
                            0,
                            0.223500,
                            0.270500
                        },
                        7.636949
                    };
                    fogColor = {
                        {
                            0.106000,
                            0.161000,
                            0.267000
                        },
                        4.715000
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting41 {
                    height = -0.100000;
                    overcast = 0.800000;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        3.500000
                    };
                    diffuseCloud = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        3.500000
                    };
                    ambient = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        5.520000
                    };
                    ambientCloud = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        5.520000
                    };
                    ambientMid = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        5.961600
                    };
                    ambientMidCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        5.961600
                    };
                    groundReflection = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        5.723136
                    };
                    groundReflectionCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        5.723136
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0,
                            0.217500,
                            0.288000
                        },
                        6.348000
                    };
                    skyAroundSun = {
                        {
                            0,
                            0.217500,
                            0.288000
                        },
                        12.317660
                    };
                    fogColor = {
                        {
                            0.110000,
                            0.169000,
                            0.286000
                        },
                        7.072500
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting42 {
                    height = -0.100000;
                    overcast = 0.800000;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        4.200000
                    };
                    diffuseCloud = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        4.200000
                    };
                    ambient = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        6.240000
                    };
                    ambientCloud = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        6.240000
                    };
                    ambientMid = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        6.739200
                    };
                    ambientMidCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        6.739200
                    };
                    groundReflection = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        6.469632
                    };
                    groundReflectionCloud = {
                        {
                            0.240000,
                            0.630000,
                            1
                        },
                        6.469632
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0,
                            0.211500,
                            0.306000
                        },
                        7.176000
                    };
                    skyAroundSun = {
                        {
                            0,
                            0.211500,
                            0.306000
                        },
                        13.388760
                    };
                    fogColor = {
                        {
                            0.118000,
                            0.180000,
                            0.310000
                        },
                        7.995000
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh = {
                        0.007000,
                        0.038000,
                        0.067500
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016000
                    };
                    swBrightness = 1;
                };

                class Lighting43 {
                    height = -0.100000;
                    overcast = 0.800000;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        12.040000
                    };
                    diffuseCloud = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        12.040000
                    };
                    ambient = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        11.840000
                    };
                    ambientCloud = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        11.840000
                    };
                    ambientMid = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.484800
                    };
                    ambientMidCloud = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.484800
                    };
                    groundReflection = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.025410
                    };
                    groundReflectionCloud = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.025410
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0,
                            0.090000,
                            0.400000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0,
                            0.090000,
                            0.400000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.300000,
                            0.440000,
                            0.740000
                        },
                        16.500000
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };

                class Lighting44 {
                    height = -0.100000;
                    overcast = 0.800000;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        12.040000
                    };
                    diffuseCloud = {
                        {
                            0.600000,
                            0.800000,
                            1
                        },
                        12.040000
                    };
                    ambient = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        11.840000
                    };
                    ambientCloud = {
                        {
                            0.400000,
                            0.900000,
                            1
                        },
                        11.840000
                    };
                    ambientMid = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.484800
                    };
                    ambientMidCloud = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.484800
                    };
                    groundReflection = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.025410
                    };
                    groundReflectionCloud = {
                        {
                            0.360000,
                            0.720000,
                            1
                        },
                        11.025410
                    };
                    bidirect = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud = {
                        0,
                        0,
                        0
                    };
                    sky = {
                        {
                            0,
                            0.090000,
                            0.400000
                        },
                        13.800000
                    };
                    skyAroundSun = {
                        {
                            0,
                            0.090000,
                            0.400000
                        },
                        13.800000
                    };
                    fogColor = {
                        {
                            0.300000,
                            0.440000,
                            0.740000
                        },
                        16.500000
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh = {
                        0.007000,
                        0.013880,
                        0.035000
                    };
                    mie = {
                        0.005000,
                        0.005000,
                        0.005000
                    };
                    cloudsColor = {
                        {
                            1,
                            1,
                            1
                        },
                        14.800000
                    };
                    swBrightness = 1;
                };
            };

            class Lighting: Lighting {

                class BrightAlmost: DayLightingBrightAlmost {
                    overcast = 0.000000;
                };

                class Rainy: DayLightingRainy {
                    overcast = 1.000000;
                };
            };

            class Overcast: Overcast {

                class Weather1: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };

                class Weather7: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };

                class Weather2: Weather2 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
                };

                class Weather3: Weather3 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };

                class Weather4: Weather4 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };

                class Weather5: Weather5 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };

                class Weather6: Weather6 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
            };
        };
        humidityUpCoef = 0.100000;
        humidityDownCoef = 0.050000;

        class SimulWeather {
            noiseTexture = "a3\data_f\noise_raw.paa";
            numKeyframesPerDay = 48;
            windSpeedCoef = "10.0f";
            moonIrradianceCoef = "10.0f";
            fadeMaxDistanceKm = 12160.000000;
            fadeMaxAltitudeKm = 300.000000;
            fadeNumAltitudes = 8;
            fadeNumElevations = 8;
            fadeNumDistances = 8;
            fadeEarthTest = 1;
            autoBrightness = 0;
            autoBrightnessStrength = 0.100000;
            cloudGridWidth = 64;
            cloudGridLength = 64;
            cloudGridHeight = 16;
            helperGridElevationSteps = 24;
            helperGridAzimuthSteps = 15;
            helperEffectiveEarthRadius = 1000000;
            helperCurvedEarth = 1;
            helperAdjustCurvature = 0;
            helperNumLayers = 120;
            helperMaxDistance = 160000;
            helperNearCloudFade = 0.100000;
            helperChurn = 10;
            cloudWidth = 40000;
            cloudLength = 40000;
            wrapClouds = 1;
            noiseResolution = 8;
            noisePeriod = 4.000000;
            opticalDensity = 0.500000;
            alphaSharpness = 0.850000;
            selfShadowScale = 0.905000;
            mieAsymmetry = 0.508700;
            minimumLightElevationDegrees = 6.000000;
            directLightCoef = 1.000000;
            indirectLightCoef = 0.040000;
            fogStart = 0;
            fogEnd = 50000;
            fogHeight = 2000;

            class DefaultKeyframe {
                rayleigh = {
                    0.007490,
                    0.013880,
                    0.028780
                };
                mie = {
                    0.004600,
                    0.004600,
                    0.004600
                };
                haze = 30;
                hazeBaseKm = 5.000000;
                hazeScaleKm = 1.000000;
                hazeEccentricity = 1;
                brightnessAdjustment = 1.000000;
                cloudiness = 0.600000;
                cloudBaseKm = 2.850000;
                cloudHeightKm = 6.000000;
                directLight = 1.000000;
                indirectLight = 1.000000;
                ambientLight = 0.200000;
                noiseOctaves = 4.300000;
                noisePersistence = 0.535000;
                fractalAmplitude = 2.300000;
                fractalWavelength = 240.000000;
                extinction = 4.700000;
                diffusivity = 0.001000;
            };

            class Overcast {

                class Weather1: DefaultKeyframe {
                    overcast = 0.000000;
                    cloudiness = 0.000000;
                    diffusivity = 0.001000;
                    seqFileKeyframe = 0;
                };

                class Weather2: DefaultKeyframe {
                    overcast = 0.200000;
                    cloudiness = 0.250000;
                    diffusivity = 0.001000;
                    seqFileKeyframe = 0;
                };

                class Weather3: DefaultKeyframe {
                    overcast = 0.400000;
                    cloudiness = 0.450000;
                    diffusivity = 0.001000;
                    seqFileKeyframe = 3;
                };

                class Weather4: DefaultKeyframe {
                    overcast = 0.500000;
                    cloudiness = 0.460000;
                    diffusivity = 0.010000;
                    seqFileKeyframe = 4;
                };

                class Weather5: DefaultKeyframe {
                    overcast = 0.800000;
                    cloudiness = 0.800000;
                    diffusivity = 0.010000;
                    extinction = 4.300000;
                    cloudBaseKm = 1.900000;
                    cloudHeightKm = 8.000000;
                    seqFileKeyframe = 4;
                };

                class Weather6: DefaultKeyframe {
                    overcast = 1.000000;
                    cloudiness = 1.000000;
                    diffusivity = 0.001000;
                    extinction = 4.000000;
                    cloudBaseKm = 1.700000;
                    cloudHeightKm = 10.000000;
                    seqFileKeyframe = 4;
                };
            };
        };
        horizonParallaxCoef = 0.045000;
        horizonFogColorationStart = "0.8f";
        skyFogColorationStart = "0.7f";
        soundMapSizeCoef = 4;
        satelliteNormalBlendStart = 10;
        satelliteNormalBlendEnd = 100;
        skyObject = "A3\Map_Stratis\data\obloha.p3d";
        horizontObject = "A3\Map_Stratis\data\horizont.p3d";
        skyTexture = "A3\Map_Stratis\data\sky_semicloudy_sky.paa";
        skyTextureR = "A3\Map_Stratis\data\sky_semicloudy_lco.paa";
        terrainBlendMaxDarkenCoef = "0.85f";
        terrainBlendMaxBrightenCoef = "0.15f";
        access = 3;
        worldId = 1;
        cutscenes = {
            ""
        };
        description = "España";
        icon = "Spain\data\textures\SpainIsLifeLogo.paa";
        worldName = "Spain\Spain.wrp";
        pictureMap = "Spain\data\textures\Spainsat.paa";
        pictureShot = "Spain\data\textures\Spainsat.paa";
        plateFormat = "A#$-####";
        plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
        author = "Victor94, Mike93041 y colaboracion del equipo de SpainIsLife";
        mapSize = 20480;
        mapZone = 30;
        mapArea = {
            25.011957,
            39.718452,
            25.481527,
            40.094578
        };
        longitude = 20;
        latitude = 0;
        elevationOffset = 0;
        minHillsAltitude = 60;
        maxHillsAltitude = 500;
        newRoadsShape = "Spain\roads\roads.shp";
        mapDrawingBrightnessModifier = 1.500000;

        class EnvMaps {

            class EnvMap1 {
                texture = "A3\Map_Stratis\data\env_land_ClearSky_ca.paa";
                overcast = 0;
            };

            class EnvMap2 {
                texture = "A3\Map_Stratis\data\env_land_SemiCloudySky_ca.paa";
                overcast = 0.300000;
            };

            class EnvMap3 {
                texture = "A3\Map_Stratis\data\env_land_OvercastSky_ca.paa";
                overcast = 0.600000;
            };
        };

        class OutsideTerrain {
            satellite = "";
            enableTerrainSynth = 0;

            class Layers {

                class Layer0 {
                    nopx = "A3\Map_Data\gdt_seabed_nopx.paa";
                    texture = "A3\Map_Data\gdt_seabed_nopx.paa";
                };
            };
            colorOutside = {
                0.227451,
                0.274510,
                0.384314,
                1
            };
        };

        class Grid: Grid {
            offsetX = 0;
            offsetY = 30720;

            class Zoom1 {
                zoomMax = 0.050000;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };

            class Zoom2 {
                zoomMax = 0.500000;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };

            class Zoom3 {
                zoomMax = 1000000015047466200000000000000.000000;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
        startTime = "12:00";
        startDate = "24/6/2017";
        centerPosition = {
            10801.900391,
            10589.599609,
            100
        };
        seagullPos = {
            15360,
            150.000000,
            15360
        };
        ilsPosition = {
            9580,
            12102
        };
        ilsDirection = {-0.694700,
            0.080000,
            -0.719300
        };
        drawTaxiway = "false";
        ilsTaxiOff = {
            9580,
            12102,
            10446,
            13036,
            10449,
            13067,
            10429,
            13106,
            10391,
            13113,
            10354,
            13097,
            10221,
            12944
        };
        ilsTaxiIn = {
            10221,
            12944,
            9597,
            12266,
            9571,
            12215,
            9588,
            12180,
            9580,
            12102
        };

        class SecondaryAirports {

            class Airstrip_1 {
                ilsPosition = {
                    11358.500000,
                    11441.200195
                };
                ilsDirection = {-0.550500,
                    0.080000,
                    -0.834900
                };
                ilsTaxiOff = {
                    11663,
                    11913.400391,
                    11680.099609,
                    11920.799805,
                    11699.700195,
                    11917.500000,
                    11717,
                    11906,
                    11721.900391,
                    11893.099609,
                    11721.099609,
                    11880.099609,
                    11703.299805,
                    11856.500000
                };
                ilsTaxiIn = {
                    11703.299805,
                    11856.500000,
                    11671.799805,
                    11788,
                    11466,
                    11467.200195,
                    11446.500000,
                    11458.500000,
                    11427.900391,
                    11465.299805,
                    11400.700195,
                    11482.099609,
                    11398,
                    11493,
                    11400.400391,
                    11505
                };
                drawTaxiway = 0;
            };

            class Airstrip_2 {
                ilsPosition = {
                    9268.160156,
                    21575.099609
                };
                ilsDirection = {
                    0.802700,
                    0.080000,
                    0.596400
                };
                ilsTaxiOff = {
                    9034.070313,
                    21396.699219,
                    9022.120117,
                    21398.900391,
                    9012.959961,
                    21410.500000,
                    9008.709961,
                    21433.900391,
                    9017.870117,
                    21463.699219,
                    9126.839844,
                    21580.199219,
                    9168.440430,
                    21610.599609
                };
                ilsTaxiIn = {
                    9168.440430,
                    21610.599609,
                    9191.790039,
                    21623,
                    9207.690430,
                    21620.300781,
                    9219.230469,
                    21617.400391,
                    9251.410156,
                    21588.800781,
                    9256.730469,
                    21578.900391,
                    9255.219727,
                    21567
                };
                drawTaxiway = 0;
            };

            class Airstrip_3 {
                ilsPosition = {
                    21074.300781,
                    7098.580078
                };
                ilsDirection = {-0.190800,
                    0.080000,
                    -0.981600
                };
                ilsTaxiOff = {
                    21157.199219,
                    7511.689941,
                    21158.300781,
                    7526.319824,
                    21146.699219,
                    7531.259766,
                    21132.300781,
                    7529.410156,
                    20863.699219,
                    7300.609863,
                    20825.599609,
                    7275.689941
                };
                ilsTaxiIn = {
                    20825.599609,
                    7275.689941,
                    20801.900391,
                    7260.939941,
                    20798.500000,
                    7251.930176,
                    20802.699219,
                    7244.720215,
                    20815.699219,
                    7245.370117,
                    20847.400391,
                    7275.870117,
                    20862.199219,
                    7280.759766,
                    20879.300781,
                    7278.830078,
                    21068.900391,
                    7161.229980,
                    21082.900391,
                    7163.580078,
                    21091.900391,
                    7176.149902
                };
                drawTaxiway = 0;
            };

            class Airstrip_4 {
                ilsPosition = {
                    27153.500000,
                    24904.099609
                };
                ilsDirection = {
                    0.654600,
                    0.080000,
                    0.756000
                };
                ilsTaxiOff = {
                    26849.599609,
                    24558,
                    26832.500000,
                    24542.900391,
                    26812.699219,
                    24539.699219,
                    26789.900391,
                    24547.800781,
                    26772.800781,
                    24560.599609,
                    26765.300781,
                    24581.199219,
                    26769.400391,
                    24604,
                    26801.699219,
                    24637.300781
                };
                ilsTaxiIn = {
                    26801.699219,
                    24637.300781,
                    26831.500000,
                    24668.199219,
                    26897.300781,
                    24705.800781,
                    27097.199219,
                    24917.599609,
                    27113.199219,
                    24922.500000,
                    27131.300781,
                    24916,
                    27142.699219,
                    24908.099609,
                    27143.800781,
                    24899.199219,
                    27140,
                    24889.900391,
                    27132.900391,
                    24881.300781
                };
                drawTaxiway = 0;
            };

            class Airstrip_5 {
                ilsPosition = {
                    23149.599609,
                    18400
                };
                ilsDirection = {
                    0,
                    0.080000,
                    -1
                };
                ilsTaxiOff = {
                    23149.800781,
                    18795.699219,
                    23148.900391,
                    18899.699219,
                    23137.199219,
                    18937.900391,
                    23100.400391,
                    18946.500000,
                    23063.099609,
                    18930.500000,
                    23046.099609,
                    18896.699219,
                    23031.599609,
                    18845.300781
                };
                ilsTaxiIn = {
                    23031.599609,
                    18845.300781,
                    23052,
                    18396.400391,
                    23074.400391,
                    18367.800781,
                    23099.699219,
                    18356.599609,
                    23132.800781,
                    18364.500000,
                    23149,
                    18398.500000,
                    23149.400391,
                    18432.500000
                };
                drawTaxiway = 0;
            };
        };

        class ReplaceObjects {};

        class Sounds {
            sounds = {};
        };

        class Animation {
            vehicles = {};
        };
        clutterGrid = 1.500000;
        clutterDist = 125;
        noDetailDist = 85;
        fullDetailDist = 15;
        midDetailTexture = "A3\Map_Data\middle_mco.paa";
        minTreesInForestSquare = 4;
        minRocksInRockSquare = 4;

        class Subdivision {

            class Fractal {
                rougness = 5;
                maxRoad = 0.020000;
                maxTrack = 0.500000;
                maxSlopeFactor = 0.050000;
            };

            class WhiteNoise {
                rougness = 2;
                maxRoad = 0.010000;
                maxTrack = 0.050000;
                maxSlopeFactor = 0.002500;
            };
            minY = 0.000000;
            minSlope = 0.020000;
        };

        class Ambient {};

        class AmbientA3 {
            maxCost = 500;

            class Radius440_500 {
                areaSpawnRadius = 70;
                areaMaxRadius = 200;
                spawnCircleRadius = 30;
                spawnInterval = 4.700000;

                class Species {

                    class Kestrel_random_F {
                        maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night)";
                        maxWorldCount = 5;
                        cost = 3;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 200;
                        minAlt = -10;
                    };

                    class Seagull {
                        maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
                        maxWorldCount = 40;
                        cost = 3;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 200;
                        minAlt = -10;
                    };

                    class Rabbit_F {
                        maxCircleCount = "(20 * (0.1 - houses)) * (1 - sea)";
                        maxWorldCount = 5;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 80;
                        minAlt = -5;
                    };
                };
            };

            class Radius40_60 {
                areaSpawnRadius = 50;
                areaMaxRadius = 83;
                spawnCircleRadius = 10;
                spawnInterval = 1.500000;

                class Species {

                    class CatShark_F {
                        maxCircleCount = "(4 * (WaterDepth interpolate [1,30,0,1]))";
                        maxWorldCount = 10;
                        cost = 6;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 10;
                        minAlt = -80;
                    };

                    class Turtle_F {
                        maxCircleCount = "(2 * (waterDepth interpolate [1,16,0,1]) * ((1-houses) * (1-houses)))";
                        maxWorldCount = 6;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 10;
                        minAlt = -80;
                    };

                    class Salema_F {
                        maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 40;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };

                    class Ornate_random_F {
                        maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.05))";
                        maxWorldCount = 30;
                        cost = 5;
                        spawnCount = 3;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };

                    class Mackerel_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };

                    class Mullet_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };

                    class Tuna_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) - 0.2))";
                        maxWorldCount = 10;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                };
            };

            class Radius30_40 {
                areaSpawnRadius = 30;
                areaMaxRadius = 40;
                spawnCircleRadius = 3;
                spawnInterval = 3.750000;

                class Species {

                    class DragonFly {
                        maxCircleCount = "4 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * sea * (1 - windy)";
                        maxWorldCount = 4;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class ButterFly_random {
                        maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FireFly {
                        maxCircleCount = "(6 * night) * (1 - sea) * (1 - houses) * (1 - windy)";
                        maxWorldCount = 20;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 3;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class Cicada {
                        maxCircleCount = "(4 * night) * (1 - sea) * (1 - windy)";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 3;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };

            class Radius15_20 {
                areaSpawnRadius = 15;
                areaMaxRadius = 20;
                spawnCircleRadius = 2;
                spawnInterval = 2.850000;

                class Species {

                    class FxWindGrass1 {
                        maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.500000;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindGrass2 {
                        maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.500000;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindLeaf1 {
                        maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.500000;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindLeaf2 {
                        maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.500000;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindLeaf3 {
                        maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.500000;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindPollen1 {
                        maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindPaper1 {
                        maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class FxWindPlastic1 {
                        maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };

            class Radius6_10 {
                areaSpawnRadius = 6;
                areaMaxRadius = 10;
                spawnCircleRadius = 1;
                spawnInterval = 0.100000;

                class Species {

                    class HoneyBee {
                        maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy)";
                        maxWorldCount = 8;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class HouseFly {
                        maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
                        maxWorldCount = 10;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };

                    class Mosquito {
                        maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
        };

        class Names {};
        safePositionAnchor = {
            15667,
            15791.299805
        };
        safePositionRadius = 7000;
        loadingTexts = {
            "Explora España y encuentra las similitudes",
            "Si encuentras algun error, haznoslo saber en el foro",
            "Edificios exclusivos por SpainIsLife"
        };
    };
};

class CfgWorldList {

    class Spain {};
};

class CfgSurfaces {

    class Default {};

    class Water {};

    class SpainArenaSurface: Default {
        access = 2;
        files = "arena_*";
        character = "Empty";
        soundEnviron = "sand";
        soundHit = "soft_ground";
        impact = "hitGroundSoft";
        rough = 0.090000;
        maxSpeedCoef = 0.900000;
        dust = 0.400000;
        lucidity = 1.250000;
        grassCover = 0;
        isWater = 0;
        surfaceFriction = 1.600000;
        maxClutterColoringCoef = 1.350000;
    };

    class SpainNieveSurface: Default {
        access = 2;
        files = "nieve_*";
        character = "Empty";
        soundEnviron = "snow";
        soundHit = "soft_ground";
        impact = "hitGround";
        rough = 0.090000;
        maxSpeedCoef = 0.800000;
        dust = 0;
        lucidity = 2;
        grassCover = 0;
        isWater = 0;
        maxClutterColoringCoef = 1.500000;
        surfaceFriction = 1.800000;
    };

    class SpainUnderwaterSurface: Default {
        access = 2;
        files = "underwater_*";
        character = "Spain_UnderwaterClutter";
        soundEnviron = "gravel";
        soundHit = "hard_ground";
        rough = 0.150000;
        maxSpeedCoef = 0.850000;
        dust = 0.750000;
        lucidity = 200;
        grassCover = 0.050000;
        surfaceFriction = 1.400000;
        maxClutterColoringCoef = 1.350000;
    };

    class SpainConcreteSurface: Default {
        access = 2;
        files = "concrete_*";
        character = "Empty";
        soundEnviron = "concrete";
        soundHit = "concrete";
        rough = 0.050000;
        maxSpeedCoef = 1;
        dust = 0.050000;
        lucidity = 0.300000;
        grassCover = 0.000000;
        impact = "hitConcrete";
        maxClutterColoringCoef = 1.350000;
    };

    class SpainVegetacionSurface: Default {
        access = 2;
        files = "vegetacion_*";
        character = "SpainGreenGrassClutter";
        soundEnviron = "grass";
        soundHit = "soft_ground";
        rough = 0.080000;
        maxSpeedCoef = 0.900000;
        dust = 0.150000;
        lucidity = 4;
        grassCover = 0.050000;
        impact = "hitGroundSoft";
        surfaceFriction = 1.700000;
        maxClutterColoringCoef = 1.350000;
    };

    class SpainSecoSurface: Default {
        access = 2;
        files = "seco_*";
        character = "Empty";
        soundEnviron = "dirt";
        soundHit = "soft_ground";
        rough = 0.090000;
        maxSpeedCoef = 0.900000;
        dust = 0.500000;
        lucidity = 1;
        grassCover = 0.030000;
        impact = "hitGroundSoft";
        surfaceFriction = 1.800000;
        maxClutterColoringCoef = 1.350000;
    };
};

class CfgSurfaceCharacters {

    class Spain_UnderwaterClutter {
        probability = {
            0.400000,
            0.200000,
            0.100000,
            0.005000,
            0.100000,
            0.059500,
            0.135500
        };
        names = {
            "SpainSeaWeed1",
            "SpainSeaWeed2",
            "SpainCoral4",
            "SpainCoral1",
            "SpainCoral5",
            "SpainCoral3",
            "SpainCoral2"
        };
    };

    class SpainGreenGrassClutter {
        probability = {
            0.950000,
            0.020000,
            0.020000,
            0.010000
        };
        names = {
            "SpainGrassGreenGroup",
            "SpainThornGreenSmall",
            "SpainThornGreenBig",
            "SpainPlantGreenShrub"
        };
    };
};

class CfgMaterials {

    class Water {
        PixelShaderID = "Water";
        VertexShaderID = "Water";
        ambient = {
            0.000000,
            0.025000,
            0.050000,
            0.500000
        };
        diffuse = {
            0.000000,
            0.050000,
            0.040000,
            1.000000
        };
        forcedDiffuse = {
            0.000000,
            0.000000,
            0.000000,
            1
        };
        specular = {
            0.120000,
            0.120000,
            0.120000,
            1
        };
        specularPower = 100;
        emmisive = {
            0,
            0,
            0,
            0
        };

        class Stage1 {
            texture = "A3\Map_data\water_nofhq.paa";
            uvSource = "texWaterAnim";

            class uvTransform {
                aside = {
                    0,
                    1,
                    0
                };
                up = {
                    1,
                    0,
                    0
                };
                dir = {
                    0,
                    0,
                    1
                };
                pos = {
                    0.300000,
                    0.400000,
                    0
                };
            };
        };

        class Stage2 {
            texture = "A3\data_f\sea_foam_lco.paa";
            uvSource = "none";
        };

        class Stage3 {
            texture = "A3\Map_data\water2_nohq.paa";
            uvSource = "none";
        };
    };

    class Shore {
        PixelShaderID = "Shore";
        VertexShaderID = "Shore";
        ambient = {
            1.000000,
            1.000000,
            1.000000,
            1.000000
        };
        diffuse = {
            0.700000,
            0.700000,
            0.700000,
            1.000000
        };
        forcedDiffuse = {
            0.000000,
            0.000000,
            0.000000,
            1
        };
        specular = {
            0.120000,
            0.120000,
            0.120000,
            1
        };
        specularPower = 65;
        emmisive = {
            0,
            0,
            0,
            0
        };

        class TexGen0 {
            uvSource = "none";
        };

        class TexGen1 {
            uvSource = "texWaterAnim";

            class uvTransform {
                aside = {
                    0,
                    5,
                    0
                };
                up = {
                    5,
                    0,
                    0
                };
                dir = {
                    0,
                    0,
                    1
                };
                pos = {
                    0.300000,
                    0.400000,
                    0
                };
            };
        };

        class Stage1 {
            texture = "A3\data_f\water_nofhq.paa";
            texGen = 1;
        };

        class Stage2 {
            texture = "A3\data_f\sea_foam_lco.paa";
            texGen = 0;
        };

        class Stage3 {
            texture = "A3\data_f\water2_nohq.paa";
            texGen = 0;
        };

        class Stage6 {
            texture = "A3\data_f\shoreFoam_edge.paa";
            texGen = 0;
        };

        class Stage7 {
            texture = "A3\data_f\shoreWetNormal_nohq.paa";
            texGen = 0;
        };

        class Stage8 {
            texture = "A3\Data_F\env_land_CO.paa";
            useWorldEnvMap = 1;
            texGen = 0;
        };
    };

    class ShoreWet {
        PixelShaderID = "ShoreWet";
        VertexShaderID = "Shore";
        ambient = {
            1.000000,
            1.000000,
            1.000000,
            1.000000
        };
        diffuse = {
            1.000000,
            1.000000,
            1.000000,
            1.000000
        };
        forcedDiffuse = {
            0.000000,
            0.000000,
            0.000000,
            0.000000
        };
        emmisive = {
            0.000000,
            0.000000,
            0.000000,
            1.000000
        };
        specular = {
            0.100000,
            0.100000,
            0.100000,
            1.000000
        };
        specularPower = 1.000000;

        class Stage0 {
            texture = "A3\data_f\shoreWetNormal_nohq.paa";
            uvSource = "none";
        };

        class Stage1 {
            texture = "#(ai,64,128,1)fresnel(1.4,0.1)";
            uvSource = "none";
        };

        class Stage2 {
            useWorldEnvMap = 1;
            texture = "A3\Data_F\env_land_CO.paa";
            uvSource = "none";
        };
    };
};
